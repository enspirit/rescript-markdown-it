open Jest

let () = describe(
  "markdown-it",
  {
    open ExpectJs
    () => {
      test("#render", () =>
        expect(
          MarkdownIt.render(MarkdownIt.createMarkdownIt(), "# markdown-it rulezz!")
        )
        |> toBe("<h1>markdown-it rulezz!</h1>\n")
      )

      test("#render with html", () =>
        expect(
          MarkdownIt.render(MarkdownIt.createMarkdownIt(~html=true, ()), "# markdown-it <em>rulezz</em>!")
        )
        |> toBe("<h1>markdown-it <em>rulezz</em>!</h1>\n")
      )
    }
  }
)
