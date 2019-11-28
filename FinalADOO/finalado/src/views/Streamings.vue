<template>
  <div class="streamingsView">
    <v-app id="reproductor">
      <v-card height="100%">
        <VueTwitchPlayer :channel="datos[number].channel"></VueTwitchPlayer>
      </v-card>
    </v-app>
  </div>
</template>

<script>
import VueTwitchPlayer from "vue-twitch-player";

export default {
  components: {
    VueTwitchPlayer
  },
  data() {
    return {
      datos: [
        {
          title: "RiotGames",
          channel: "riotgames",
          descripcion: "Canal oficial de Riotgames"
        },
        {
          title: "OverwatchLeague",
          channel: "overwatchleague",
          descripcion: "Canal oficial de Overwatch"
        },
        {
          title: "PokémonLeague",
          channel: "pokemon",
          descripcion: "Canal oficial de Pokémon"
        },
        {
          title: "CSGO League",
          channel: "esl_csgo",
          descripcion: "Canal oficial de Counter Strike"
        },
        {
          title: "The international",
          channel: "dota2ti",
          descripcion: "Canal oficial de Dota 2"
        },
        {
          title: "Fortnite",
          channel: "fortnite",
          descripcion: "Canal oficial de Fortnite"
        }
      ],
      min: 0,
      max: 5,
      number: 3
    };
  },
  created: function() {
    this.getRandomNumber();
  },
  methods: {
    loadNum: function() {
      this.min = 1;
      this.max = 10;
      this.getRandomNumber();
    },
    getInput: function() {
      let min = Number(this.min);
      let max = Number(this.max);
      if (min > max) {
        [min, max] = [max, min];
      }
      this.min = min;
      this.max = max;
      this.getRandomNumber();
    },
    getRandomNumber: function() {
      this.number = this.generateNumber();
    },
    generateNumber: function() {
      return Math.floor(Math.random() * (this.max - this.min + 1) + this.min);
    }
  }
};
</script>

<style lang="scss">
#reproductor {
  height: 100%;
}
</style>
