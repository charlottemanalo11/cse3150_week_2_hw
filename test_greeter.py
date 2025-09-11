import subprocess

def run_greeter(input_text):
    input_with_newline = input_text + "\n"
    result = subprocess.run(
        ["./greeter"],
        input=input_with_newline,
        capture_output=True,
        text=True,
        check=True
    )
    lines = result.stdout.strip().splitlines()
    return lines[-1] if lines else ""

def test_greeting_with_spaces():
    name = "First Last"
    expected_output = f"Hello, {name}!"
    actual_output = run_greeter(name)
    assert actual_output == expected_output
