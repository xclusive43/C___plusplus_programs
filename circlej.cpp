<?xml version="1.0" encoding="iso-8859-1"?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<title>circlej.cpp</title>
<meta http-equiv="Content-Type" content="text/html; charset=iso-8859-1" />
<meta name="generator" content="SynEdit HTML exporter" />
<style type="text/css">
<!--
body { color: #000000; background-color: #FFFFFF; }
.cpp1-assembler { color: #0000FF; }
.cpp1-character { color: #000000; }
.cpp1-comment { color: #0078D7; font-style: italic; }
.cpp1-float { color: #800080; }
.cpp1-hexadecimal { color: #800080; }
.cpp1-identifier { color: #000000; }
.cpp1-illegalchar { color: #000000; }
.cpp1-number { color: #800080; }
.cpp1-octal { color: #800080; }
.cpp1-preprocessor { color: #008000; }
.cpp1-reservedword { color: #000000; font-weight: bold; }
.cpp1-space { background-color: #FFFFFF; color: #000000; }
.cpp1-string { color: #0000FF; font-weight: bold; }
.cpp1-symbol { color: #FF0000; font-weight: bold; }
-->
</style>
</head>
<body>
<pre>
<code><span style="font: 10pt Consolas;"><span class="cpp1-comment">// C Implementation for drawing circle
</span><span class="cpp1-preprocessor">#include &lt;graphics.h&gt;
</span><span class="cpp1-space"> 
</span><span class="cpp1-comment">//driver code
</span><span class="cpp1-reservedword">int</span><span class="cpp1-space"> main</span><span class="cpp1-symbol">()
{
</span><span class="cpp1-space">    </span><span class="cpp1-comment">// gm is Graphics mode which is
</span><span class="cpp1-space">    </span><span class="cpp1-comment">// a computer display mode that
</span><span class="cpp1-space">    </span><span class="cpp1-comment">// generates image using pixels.
</span><span class="cpp1-space">    </span><span class="cpp1-comment">// DETECT is a macro defined in
</span><span class="cpp1-space">    </span><span class="cpp1-comment">// &quot;graphics.h&quot; header file
</span><span class="cpp1-space">    </span><span class="cpp1-reservedword">int</span><span class="cpp1-space"> gd </span><span class="cpp1-symbol">=</span><span class="cpp1-space"> DETECT</span><span class="cpp1-symbol">,</span><span class="cpp1-space"> gm</span><span class="cpp1-symbol">;
</span><span class="cpp1-space"> 
    </span><span class="cpp1-comment">// initgraph initializes the
</span><span class="cpp1-space">    </span><span class="cpp1-comment">// graphics system by loading a
</span><span class="cpp1-space">    </span><span class="cpp1-comment">// graphics driver from disk
</span><span class="cpp1-space">    initgraph</span><span class="cpp1-symbol">(&amp;</span><span class="cpp1-identifier">gd</span><span class="cpp1-symbol">,</span><span class="cpp1-space"> </span><span class="cpp1-symbol">&amp;</span><span class="cpp1-identifier">gm</span><span class="cpp1-symbol">,</span><span class="cpp1-space"> </span><span class="cpp1-string">&quot;&quot;</span><span class="cpp1-symbol">);
</span><span class="cpp1-space"> 
    </span><span class="cpp1-comment">// circle fuction
</span><span class="cpp1-space">    circle</span><span class="cpp1-symbol">(</span><span class="cpp1-number">250</span><span class="cpp1-symbol">,</span><span class="cpp1-space"> </span><span class="cpp1-number">200</span><span class="cpp1-symbol">,</span><span class="cpp1-space"> </span><span class="cpp1-number">50</span><span class="cpp1-symbol">);
</span><span class="cpp1-space"> 
    getch</span><span class="cpp1-symbol">();
</span><span class="cpp1-space"> 
    </span><span class="cpp1-comment">// closegraph function closes the
</span><span class="cpp1-space">    </span><span class="cpp1-comment">// graphics mode and deallocates
</span><span class="cpp1-space">    </span><span class="cpp1-comment">// all memory allocated by
</span><span class="cpp1-space">    </span><span class="cpp1-comment">// graphics system .
</span><span class="cpp1-space">    closegraph</span><span class="cpp1-symbol">();
</span><span class="cpp1-space"> 
    </span><span class="cpp1-reservedword">return</span><span class="cpp1-space"> </span><span class="cpp1-number">0</span><span class="cpp1-symbol">;
}
</span></span>
</code></pre>
</body>
</html>