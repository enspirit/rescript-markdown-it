# rescript-markdown-it

[ReScript](https://rescript-lang.org) bindings for [markdown-it](https://github.com/markdown-it/markdown-it).

# Usage

```reasonml
MarkdownIt.render(MarkdownIt.createMarkdownIt(), "# This is a markdown title")
```

# Developers section

First and formost, configure your environment with `npm install`.

Specific ReScript aliases (`clean`, `build`, `watch`, `test`...) are defined
in the `package.json` file to be used with `npm run [alias]`.
