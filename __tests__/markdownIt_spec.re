open Jest;

let () =
  describe(
    "markdown-it",
    ExpectJs.(
      () => {
        test("#render", () =>
          expect(
            MarkdownIt.render(MarkdownIt.createMarkdownIt(), "# markdown-it rulezz!")
          )
          |> toBe("<h1>markdown-it rulezz!</h1>\n")
        );
      }
    ),
  );
