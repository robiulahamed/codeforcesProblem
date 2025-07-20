from flask import Flask,render_template
app=Flask(__name__)
print("hello word")

@app.route("/home")

@app.route("/")

def home():
    return  render_template('index.html')

@app.route("/about")
def about():
    return "this is about option"


if __name__=='__main__':
    app.run(debug=True)