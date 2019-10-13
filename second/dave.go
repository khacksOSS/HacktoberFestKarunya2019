// @davidjon1337
// URK18CS243

package main

import (
	"bufio"
	"fmt"
	"net/url"
	"os"
	"strings"

	"gopkg.in/h2non/gentleman.v2"
)

const baseURL = "https://api.github.com/users/"

type User struct {
	username string
}

func (r *User) getUserDATA() {
	uri := strings.TrimSpace(baseURL + r.username)
	parsedURL, _ := url.ParseRequestURI(uri)
	cli := gentleman.New()
	cli.URL(parsedURL.String())
	req := cli.Request()
	res, _ := req.Send()
	fmt.Println(res)
}

func main() {
	reader := bufio.NewReader(os.Stdin)
	fmt.Println("Enter a Username: ")
	username, _ := reader.ReadString('\n')
	user := User{username}
	user.getUserDATA()

}
