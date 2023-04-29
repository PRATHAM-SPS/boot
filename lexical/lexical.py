import re
def lex(input_string):
    # Define regular expressions for valid tokens
    float_regex = r'\d+\.\d+'
    identifier_regex = r'[a-zA-Z_]\w*'
    operator_regex = r'[+\-*/=]'

    # Tokenize the input string
    tokens = re.findall(f'{float_regex}  |{identifier_regex}|{operator_regex}', input_string)

    # Check each token for validity
    for token in tokens:
        if re.match(float_regex, token):
            print(f'Valid float: {token}')
        elif re.match(identifier_regex, token):
            print(f'Valid identifier: {token}')
        elif re.match(operator_regex, token):
            print(f'Valid operator: {token}')
        else:
            print(f'Invalid  token: {token}')

# Test the lexer on an example input    string
input_string = 'float x =             a + 1b'
lex(input_string)