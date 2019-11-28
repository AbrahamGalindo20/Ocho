<template>
  <v-container class="grey lighten-5">
    <v-row no-gutters>
      <template v-for="n in 1">
        <v-col :key="n">
          <v-card class="pa-2" outlined tile>
            Jugador <br />
            Descripción: Lorem ipsum dolor sit amet, consectetur adipisicing
            elit. Nam nulla explicabo incidunt atque voluptas, cupiditate et
            tempora consequatur magnam recusandae dolorum maxime odit iusto
            animi labore sit quibusdam modi omnis?
          </v-card>
        </v-col>
        <v-responsive
          v-if="n === 2"
          :key="`width-${n}`"
          width="100%"
        ></v-responsive>
      </template>
    </v-row>
  </v-container>
</template>

<script>
export default {};
</script>

<style></style>
