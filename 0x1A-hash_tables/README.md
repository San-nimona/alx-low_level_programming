<div class="s-prose js-post-body" itemprop="text">
<p><strong>Prerequisites</strong></p>

<p>For this answer I'm going to assume you know how to use pointers, structs, and have a basic understanding of the C language.</p>

<p>Also if you don't know. When talking about the speed of algorithms and data structures you should know the terms:</p>

<p>O() = (it's pronounced "Big-oh") Big-oh or O() refers to the "worst-case-scenario" runtime. Similarly, in math, it's  big O notation and describes the limiting behavior of a function. If somethings O(1) that's constant time "really good". If somethings O(n) that means if the list is a million long. It is at worst going to run a million time. O() is generally the one used to determine how fast something runs because that's how fast it'll run in it's worst case.</p>

<p>Ω = (greek letter Omega) refers to it's best case scenario. It's not used that as much as O() so I won't go into too much detail about it. But just know that if somethings Ω(1), in it's best case scenario it'll take just one time.</p>

<p>Θ = (greek letter theta) is unique in that it is only used when the O() and Ω() runtime are the same. So like in the case of the recursive sorting algorithm <a href="https://en.wikipedia.org/wiki/Merge_sort" rel="noreferrer">merge sort</a>. It's run time is Θ(n(log(n))). Which means that it's O(n(log(n))) and it's Ω(n(log(n))).</p>

<p><strong>What is a Hash table?</strong></p>

<p>A hash table or associative array is a popular data structure used in programming. A hash table is just a linked list (I'll get to what a linked list is later on) with a hash function. A hash function basically just takes things and puts them in different "baskets". Each "basket" is just another linked list or something else depending on how you implement it. I'll explain more details on hash tables when I show you how to implement one.</p>

<p><strong>Why would I want to use a hash table rather than an array?</strong> </p>

<p>An array is very easy to use and simple to make, but it also has its downsides. For this example, let's say we have a program and in which we want to keep all its users in an array.</p>

<p>That's pretty simple. Let's just say we plan on this program having no more than 100 users and fill that array with our users</p>

<pre class="lang-c s-code-block"><code class="hljs language-c"><span class="hljs-type">char</span>* users[<span class="hljs-number">100</span>];

<span class="hljs-comment">// iterate over every user and "store" their name</span>
<span class="hljs-keyword">for</span> (<span class="hljs-type">int</span> i = <span class="hljs-number">0</span>; i &lt; userCount; i++)
{
    users[i] = <span class="hljs-string">"New username here"</span>;
}
</code></pre>

<p>So that works all well and fine and really fast too. That's O(1) right there. We can access any user in constant time. </p>

<p>But let's now assume that our program gets really popular. It now has over 80 users. Uh-Oh! We better increase the size of that array or else we'll get a buffer overflow. </p>

<p>So how do we do that? Well we're gonna have to make a new array that's bigger and copy over the contents of the old array into the new array. </p>

<p>That's very costly and we don't want to do that. We want to think cleverly and not use a something that has a fixed size. Well we already know how to use pointers to our advantage and we can bundle information into a <code>struct</code> if we wanted to. </p>

<p>So we could create a <code>struct</code> to store the username and then have it point (via a pointer) to a new <code>struct</code>. <em>Voila</em>! We now have a data structure that is expandable. It's a list of bundled information that's linked together by pointers. Thus the name linked list.</p>

<p><strong>Linked Lists</strong></p>

<p>So let's create that linked list. First we're gonna need a <code>struct</code></p>

<pre class="lang-c s-code-block"><code class="hljs language-c"><span class="hljs-keyword">typedef</span> <span class="hljs-class"><span class="hljs-keyword">struct</span> <span class="hljs-title">node</span>
{</span>
    <span class="hljs-type">char</span>* name;
    <span class="hljs-class"><span class="hljs-keyword">struct</span> <span class="hljs-title">node</span>* <span class="hljs-title">next</span>;</span>
}
node;
</code></pre>

<p>Alright so we have a string <code>name</code> and a... Wait a sec... I've never heard of a data type called a <code>struct node</code>. Well for our convenience I <code>typedef</code> a new "data type" called <code>node</code> that also happens to be our <code>struct</code> called <code>node</code>. </p>

<p>So now that we have our node for our list,  what do we need next? Well we need to create a "root" to our list so we can <code>traverse</code> it (I'll explain what I mean by <code>traverse</code> later). So let's assign a root. (remember that <code>node</code> data type I <code>typdef</code>ed earlier)</p>

<pre class="lang-c s-code-block"><code class="hljs language-c">node* first = <span class="hljs-literal">NULL</span>;
</code></pre>

<p>So now that we have our root all we need to do is make a function to insert new usernames into our list.</p>

<pre class="lang-c s-code-block"><code class="hljs language-c"><span class="hljs-comment">/*
 * inserts a name called buffer into
 * our linked list
 */</span>
<span class="hljs-type">void</span> <span class="hljs-title function_">insert</span><span class="hljs-params">(<span class="hljs-type">char</span>* buffer)</span>
{     
    <span class="hljs-comment">// try to instantiate node for number</span>
    node* newptr = <span class="hljs-built_in">malloc</span>(<span class="hljs-keyword">sizeof</span>(node));
    <span class="hljs-keyword">if</span> (newptr == <span class="hljs-literal">NULL</span>)
    {
        <span class="hljs-keyword">return</span>;
    }

    <span class="hljs-comment">// make a new ponter</span>
    newptr-&gt;name = buffer;
    newptr-&gt;next = <span class="hljs-literal">NULL</span>;

    <span class="hljs-comment">// check for empty list</span>
    <span class="hljs-keyword">if</span> (first == <span class="hljs-literal">NULL</span>)
    {
        first = newptr;
    }
    <span class="hljs-comment">// check for insertion at tail</span>
    <span class="hljs-keyword">else</span>
    {
        <span class="hljs-comment">// keep track of the previous spot in list</span>
        node* predptr = first;

        <span class="hljs-comment">// because we don't know how long this list is</span>
        <span class="hljs-comment">// we must induce a forever loop until we find the end</span>
        <span class="hljs-keyword">while</span> (<span class="hljs-literal">true</span>)
        {
            <span class="hljs-comment">// check if it is the end of the list</span>
            <span class="hljs-keyword">if</span> (predptr-&gt;next == <span class="hljs-literal">NULL</span>)
            {
                <span class="hljs-comment">// add new node to end of list</span>
                predptr-&gt;next = newptr;

                <span class="hljs-comment">// break out of forever loop</span>
                <span class="hljs-keyword">break</span>;
            }

            <span class="hljs-comment">// update pointer</span>
            predptr = predptr-&gt;next;
        }
    }         
}
</code></pre>

<p>So there you go. We have a basic linked list and now we can keep adding users all we want and we don't have to worry about running out of room. But this does come with down sides. The big problem with this is that every node or "user" in our list is "anonymous". We don't know were they are at or even how many users we have with this. (of course there are ways of making this much better -- I just want to show a very basic linked list) We have to traverse the entire list to add a user because we cannot access the end directly.</p>

<p>It's like we are in a huge dust storm and you can't see anything and we need to get to our barn. We can't see where our barn is but we have a solution. There are people standing our there (our <code>node</code>s) and they are all holding two ropes (our pointers). Each person only owns one rope but that rope is being held at the other end by someone else. Just like our <code>struct</code>, the rope acts as a pointer to where they are. So how do we get to our barn? (for this example the barn is the last "person" in the list). Well we have no idea how big our line of people are or where they go. In fact, all we see is a fence post with a rope tied to it. (Our root!) that fence post will never change so we can grab the post and start moving along until we see our first person. That person is holding two ropes (the post's pointer and their pointer).</p>

<p>So we keep traveling along the rope until we reach a new person and grab onto their rope. Eventually, we get to the end and find our barn!</p>

<p>So that is a linked list in a nutshell. Its benefits are that it can expand as much as you want but its runtime depends on how big the list is, namely O(n). So if there are 1 million users, it would have to run 1 million times to insert a new name! Wow that seems really wasteful just to insert 1 name. </p>

<p>Luckily, we are clever and can create a better solution. Why don't we, instead of having just one linked list, have a few linked lists. An array of linked lists if you will. Why don't we make an array of size 26. So we can have a unique linked list for every letter of the alphabet. Now instead of a run time of n. We can reasonably say that our new run time will be n/26. Now that won't make much of a difference at all if you have a list 1 million big. But we're just going to keep it simple for this example.</p>

<p>So we have an array of linked lists but how are we going to sort our users into the array. Well... why don't we make a function that decides which user should go where. This function will "hash" the users if you will into an array or "table". So let's create this "hashed" linked list. Thus the name hash table</p>

<p><strong>Hash Table</strong></p>

<p>As I just said, our hash table will be an array of linked lists and will be hashed by the first letter of their username. <code>A</code> will go to position 0, <code>B</code> to 1, and so on.</p>

<p>The <code>struct</code> for the this hash table will be the same as the struct for our previous linked list</p>

<pre class="lang-c s-code-block"><code class="hljs language-c"><span class="hljs-keyword">typedef</span> <span class="hljs-class"><span class="hljs-keyword">struct</span> <span class="hljs-title">node</span>
{</span>
    <span class="hljs-type">char</span>* name;
    <span class="hljs-class"><span class="hljs-keyword">struct</span> <span class="hljs-title">node</span>* <span class="hljs-title">next</span>;</span>
}
node;
</code></pre>

<p>Now just like our linked list, we need a root for our hash table</p>

<pre class="lang-c s-code-block"><code class="hljs language-c">node* first[<span class="hljs-number">26</span>] = {<span class="hljs-literal">NULL</span>};
</code></pre>

<p>The root will be an array the size of the alphabet and all positions in it will be initialized to <code>NULL</code>. (Remember: the last element in a linked list always has to point to <code>NULL</code> or else we wouldn't know it was the end)</p>

<p>Let's make a main function. It takes a username we are going to hash then insert.</p>

<pre class="lang-c s-code-block"><code class="hljs language-c"><span class="hljs-type">int</span> <span class="hljs-title function_">main</span><span class="hljs-params">(<span class="hljs-type">char</span>* name)</span>
{
    <span class="hljs-comment">// hash the name into a spot</span>
    <span class="hljs-type">int</span> hashedValue = hash(name);

    <span class="hljs-comment">// insert the name in table with hashed value</span>
    insert(hashedValue, name);
}
</code></pre>

<p>So here's our hash function. It's pretty simple. All we want to do is look at the first letter in the word and give a value from 0 - 25 based on what letter it is</p>

<pre class="lang-c s-code-block"><code class="hljs language-c"><span class="hljs-comment">/*
 * takes a string and hashes it into the correct bucket
 */</span>
<span class="hljs-type">int</span> <span class="hljs-title function_">hash</span><span class="hljs-params">(<span class="hljs-type">const</span> <span class="hljs-type">char</span>* buffer)</span>
{
    <span class="hljs-comment">// assign a number to the first char of buffer from 0-25</span>
    <span class="hljs-keyword">return</span> <span class="hljs-built_in">tolower</span>(buffer[<span class="hljs-number">0</span>]) - <span class="hljs-string">'a'</span>;
}
</code></pre>

<p>So now all we need is to create our insert function. It's going to look just like our insert function before except every time we reference our root, we're going to reference it as an array.</p>

<pre class="lang-c s-code-block"><code class="hljs language-c"><span class="hljs-comment">/*
 * takes a string and inserts it into a linked list at a part of the hash table
 */</span>
<span class="hljs-type">void</span> <span class="hljs-title function_">insert</span><span class="hljs-params">(<span class="hljs-type">int</span> key, <span class="hljs-type">const</span> <span class="hljs-type">char</span>* buffer)</span>
{
    <span class="hljs-comment">// try to instantiate node to insert word</span>
    node* newptr = <span class="hljs-built_in">malloc</span>(<span class="hljs-keyword">sizeof</span>(node));
    <span class="hljs-keyword">if</span> (newptr == <span class="hljs-literal">NULL</span>)
    {
        <span class="hljs-keyword">return</span>;
    }

    <span class="hljs-comment">// make a new pointer</span>
    <span class="hljs-built_in">strcpy</span>(newptr-&gt;name, buffer);
    newptr-&gt;next = <span class="hljs-literal">NULL</span>;

    <span class="hljs-comment">// check for empty list</span>
    <span class="hljs-keyword">if</span> (first[key] == <span class="hljs-literal">NULL</span>)
    {
       first[key] = newptr;
    }
    <span class="hljs-comment">// check for insertion at tail</span>
    <span class="hljs-keyword">else</span>
    {
        node* predptr = first[key];
        <span class="hljs-keyword">while</span> (<span class="hljs-literal">true</span>)
        {
            <span class="hljs-comment">// insert at tail</span>
            <span class="hljs-keyword">if</span> (predptr-&gt;next == <span class="hljs-literal">NULL</span>)
            {
                predptr-&gt;next = newptr;
                <span class="hljs-keyword">break</span>;
            }

            <span class="hljs-comment">// update pointer</span>
            predptr = predptr-&gt;next;
        }
    }
}
</code></pre>

<p>So that's basics of a hash table. It's pretty simple if you know how to use pointers and structs. I know that was a pretty simple example of a hash table with only an insert function, but you can make it a lot better and get more creative with your hashing function. You can also make the array as big as you want or even a use multi-dimensional array. </p>
    </div>
