open Jest;

let () =
  describe(
    "markdown-it",
    ExpectJs.(
      () => {
        test("#render", () =>
          expect(
            MarkdownIt.render("# markdown-it rulezz!")
            |> (
              result =>
                switch (result) {
                | Some(v) => v
                | None => raise(Not_found)
                }
            ),
          )
          |> toBe("<h1>markdown-it rulezz!</h1>")
        );
      }
    ),
  );
