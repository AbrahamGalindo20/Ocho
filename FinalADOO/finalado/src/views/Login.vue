<template>
  <div id="app" class="login">
    <v-app id="inspire">
      <v-container>
        <v-layout align-center justify-center>
          <v-flex xs12 sm8 md8>
            <v-form>
              <v-card class="elevation-6">
                <v-toolbar dark color="blue">
                  <v-toolbar-title>Login form</v-toolbar-title>
                </v-toolbar>
                <v-alert color="error" :value="error" icon="close">
                  The username or the password are incorrect.
                </v-alert>
                <v-card-text>
                  <v-text-field
                    v-model="username"
                    prepend-icon="person"
                    name="login"
                    label="Login"
                    type="text"
                  ></v-text-field>

                  <v-text-field
                    v-model="password"
                    prepend-icon="lock"
                    name="password"
                    label="Password"
                    type="password"
                  ></v-text-field>
                </v-card-text>
                <v-divider light></v-divider>
                <v-card-actions>
                  <v-btn to="/signup" round color="indigo" dark>Sign up</v-btn>
                  <v-spacer></v-spacer>
                  <v-btn round color="primary" dark @click.prevent="login()">
                    Login
                    <v-icon>keyboard_arrow_right</v-icon>
                  </v-btn>
                </v-card-actions>
              </v-card>
            </v-form>
          </v-flex>
        </v-layout>
      </v-container>
    </v-app>
  </div>
</template>

<script>
/* eslint eqeqeq: "off", curly: "error" */
export default {
  name: "login",
  data: () => ({
    username: "",
    password: "",
    error: false
  }),
  methods: {
    login() {
      this.$router.push("/index");
      this.$store
        .dispatch("LOGIN", {
          username: this.username,
          password: this.password
        })
        .then(success => {
          /* eslint-disable no-alert, no-console */
          this.$router.push("/index");
          console.log(success);
          /* eslint-enable no-alert, no-console */
        })
        /* eslint-disable no-alert, no-console */
        .catch(error => {
          this.error = true;
          console.log(error);
          /* eslint-enable no-alert, no-console */
        });
    }
  }
};
</script>
<style lang="scss">
.login {
  background-image: url(https://images.unsplash.com/photo-1542751371-adc38448a05e?ixlib=rb-1.2.1&ixid=eyJhcHBfaWQiOjEyMDd9&auto=format&fit=crop&w=1050&q=80);
  background-size: cover;
}
#inspire {
  background: none;
}
</style>
