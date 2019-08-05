[@bs.module "markdown-it"] [@bs.val] 
external render : string => Js.nullable(string) = "render";
let render = a => render(a) |> Js.Nullable.toOption;
