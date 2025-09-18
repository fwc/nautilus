/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 313
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=313
*/

#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>
#include <cassert>
#ifndef USE_COMPILATION
#define USE_COMPILATION false
#endif

using namespace nautilus;

#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test(val<short> var_1, val<unsigned short> var_4, val<bool> var_6, val<unsigned long long int> var_9, val<unsigned long long int> var_10, val<bool> var_11, val<int> zero, val<int*> var_17, val<short*> var_18, val<bool*> var_19) {
    *var_17 = ((/* implicit */val<int>) max((((((/* implicit */val<unsigned long long int>) max((2147483647), (((/* implicit */val<int>) var_1))))) + (((((/* implicit */val<bool>) 314990610U)) ? (((/* implicit */val<unsigned long long int>) 583007568U)) : (var_9))))), (((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) (+(((/* implicit */val<int>) var_4))))))))));
    *var_18 = ((/* implicit */val<short>) min((*var_18), (((/* implicit */val<short>) ((((max((-898692282), (((/* implicit */val<int>) var_4)))) | (((/* implicit */val<int>) (!(((/* implicit */val<bool>) 2147483647))))))) << (((/* implicit */val<int>) var_11)))))));
    *var_19 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_10)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_6))) : ((((!(((/* implicit */val<bool>) var_4)))) ? (var_9) : (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) var_11)) >> (((3794594126U) - (3794594109U))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)30546;
unsigned short var_4 = (unsigned short)27923;
bool var_6 = (bool)1;
unsigned long long int var_9 = 15263306152599394783ULL;
unsigned long long int var_10 = 4790241160817236806ULL;
bool var_11 = (bool)1;
int zero = 0;
int var_17 = 1306715509;
short var_18 = (short)31105;
bool var_19 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_17 != -1564476081;
    value_mismatch |= var_18 != (short)-9690;
    value_mismatch |= var_19 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_4, var_6, var_9, var_10, var_11, zero, &var_17, &var_18, &var_19);
  checksum();
}
