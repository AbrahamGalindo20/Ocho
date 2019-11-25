<template>
  <nav color="transparent" flat tile paddles>
    <v-app-bar dark fixed app class="indigo">
      <v-app-bar-nav-icon @click="drawer = !drawer" />
      <v-toolbar-title>
        <v-img
          src="@/assets/pictures/logohub2.png"
          v-on:click="redirect_to_main"
          width="50%"
          class="mx-auto"
          color="white"
        />
      </v-toolbar-title>
      <v-spacer></v-spacer>
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
              v-for="(item, index) in items"
              :key="index"
              @click="of"
            >
              <v-list-item-title>{{ item.title }}</v-list-item-title>
            </v-list-item>
          </v-list>
        </v-menu>
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
            <v-list-item-title class="white--text">{{
              link.text
            }}</v-list-item-title>
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
      items: [{ title: "Perfil" }, { title: "Configuración" }]
    };
  },
  methods: {
    redirect_to_main() {
      window.location.href = "/index";
    },
    redirect_to_profile() {
      window.location.href = " /profile";
    }
  }
};
</script>
