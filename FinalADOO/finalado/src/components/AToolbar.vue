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
      <v-btn icon>
        <v-icon>mdi-magnify</v-icon>
      </v-btn>
      <v-btn icon>
        <v-icon>mdi-account</v-icon>
      </v-btn>
      <v-btn icon>
        <v-icon>mdi-dots-vertical</v-icon>
      </v-btn>
    </v-app-bar>

    <v-navigation-drawer v-model="drawer" dark app class="indigo">
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
        { icon: "mdi-tools", text: "Configuración", route: "/configuration" }
      ]
    };
  },
  methods: {
    redirect_to_main() {
      window.location.href = "/index";
    }
  }
};
</script>
