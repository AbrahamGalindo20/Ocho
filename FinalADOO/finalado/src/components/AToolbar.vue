<template>
  <nav color="transparent" flat tile>
    <v-app-bar dark fixed app class="indigo">
      <v-app-bar-nav-icon @click="drawer = !drawer"></v-app-bar-nav-icon>
      <v-toolbar-title><strong>e-sportsHub</strong></v-toolbar-title>
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

    <v-navigation-drawer v-model="drawer" app :class="indigo">
      <v-list>
        <v-list-tile>
            <v-list-tile-action class="indigo--text"><v-icon>dashboard</v-icon></v-list-tile-action>
          <v-list-tile-content>
            <v-list-title-title class="black--text">
              pipo lista
            </v-list-title-title>
          </v-list-tile-content>
        </v-list-tile>
      </v-list>
    </v-navigation-drawer>
  </nav>
</template>

<script>
export default {
  data() {
    return {
      drawer: false,
      icon_drawer: false
    };
  }
};
</script>
