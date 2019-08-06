type tMarkdownIt;
[@bs.new] [@bs.module] external createMarkdownIt : unit => tMarkdownIt = "markdown-it";
[@bs.send] external render: (tMarkdownIt, string) => string = "render";
