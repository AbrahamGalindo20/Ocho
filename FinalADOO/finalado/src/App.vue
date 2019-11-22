<template>
  <v-app>
    <v-parallax dark src="./assets/lol2016.jpg">
      <v-toolbar>
        <v-toolbar-title> Titulo </v-toolbar-title>
        <v-spacer></v-spacer>
        <v-toolbar-items>
          <v-btn flat>
            <v-icon>mdi-xbox-controller</v-icon>
            Hola
          </v-btn>
          <v-btn>
            <v-icon>fas fa-lock</v-icon>
            About
          </v-btn>
          <v-btn>Contact</v-btn>
        </v-toolbar-items>
      </v-toolbar>
      <v-card> </v-card>
      <!-- <main></main> -->
    </v-parallax>
  </v-app>
</template>

<script>
export default {
  name: "App",

  components: {},

  data: () => ({
    //
  })
};
</script>
