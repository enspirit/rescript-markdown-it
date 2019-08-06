# bs-markdown-it

[BuckleScript](https://bucklescript.github.io) bindings for [markdown-it](https://github.com/markdown-it/markdown-it).

# Installation

```
npm i bs-markdown-it -s
```

# Usage

## Basic usage

```reasonml
MarkdownIt.render(MarkdownIt.createMarkdownIt(), "# This is a markdown title")
```

# Developers section

Specific BuckleScript aliases (`clean`, `build`, `watch`, `test`...) are defined
in the `package.json` file to be used with `npm run [alias]`.
