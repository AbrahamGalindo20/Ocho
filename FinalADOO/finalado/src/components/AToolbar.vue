<template>
  <nav
    color="transparent"
    flat
    tile
    paddles
    justify-space-around
    align-baseline
  >
    <v-app-bar dark fixed flat app class="indigo" hide-on-scroll>
      <v-app-bar-nav-icon @click="drawer = !drawer" />
      <v-toolbar-title>
        <v-img
          src="@/assets/pictures/logohub2.png"
          v-on:click="redirect_to_main"
          width="50%"
          class="mx-auto"
          color="white"
        />
        <v-spacer></v-spacer>
      </v-toolbar-title>
      <v-text-field hide-details prepend-icon="search" single-line>
      </v-text-field>
      <v-spacer></v-spacer>

      <div class="text-end">
        <v-menu offset-y>
          <template v-slot:activator="{ on }">
            <button v-on="on">
              <v-icon>mdi-account</v-icon>
            </button>
          </template>
          <v-list>
            <v-list-item
              v-for="(item_deploy, index) in deploy"
              :key="index"
              @click="of"
            >
              <v-list-item-title align-content-space-between>
                <v-btn
                  text
                  small
                  flat
                  v-on:click="redirect_to(item_deploy.route)"
                >
                  <v-icon icon>{{ item_deploy.icon }}</v-icon>
                  {{ item_deploy.text }}
                </v-btn>
              </v-list-item-title>
            </v-list-item>
          </v-list>
        </v-menu>
        <v-spacer></v-spacer>
      </div>
    </v-app-bar>

    <v-navigation-drawer v-model="drawer" dark app class="indigo">
      <v-layout column align-center>
        <v-flex class="mt-5">
          <v-avatar size="100">
            <img src="@/assets/avatars/user.png" alt="user.png" />
          </v-avatar>
          <p class="white--text subheading mt-1">
            usuario 1
          </p>
        </v-flex>
      </v-layout>
      <v-list>
        <v-list-item
          v-for="link in links"
          :key="link.text"
          router
          :to="link.route"
        >
          <v-list-item-icon>
            <v-icon class="white--text">{{ link.icon }}</v-icon>
          </v-list-item-icon>
          <v-list-item-content>
            <v-list-item-title class="white--text">
              {{ link.text }}
            </v-list-item-title>
          </v-list-item-content>
        </v-list-item>
      </v-list>
    </v-navigation-drawer>
  </nav>
</template>

<script>
export default {
  data() {
    return {
      drawer: false,
      icon_drawer: true,
      links: [
        { icon: "dashboard", text: "e-sports Hub", route: "/" },
        { icon: "mdi-xbox-controller", text: "Toneos", route: "/folder" },
        { icon: "person", text: "Jugadores", route: "/players" },
        { icon: "mdi-logout", text: "Cerrar Sesión", route: "/configuration" }
      ],
      deploy: [
        {
          icon: "mdi-arrow-right-bold",
          title: "Iniciar Sesión",
          text: "Iniciar Sesión",
          route: "/Login"
        },
        {
          icon: "mdi-checkbook",
          title: "About",
          text: "About",
          route: "/About"
        }
      ]
    };
  },
  methods: {
    redirect_to_main() {
      window.location.href = "/index";
    },
    redirect_to($route) {
      window.location.href = "http://localhost:8080" + $route;
    }
  }
};
</script>
