/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6902
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6902
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
void test(val<int> var_0, val<int> var_2, val<int> var_3, val<int> var_5, val<int> var_6, val<int> var_9, val<int> var_10, val<int> var_13, val<int> zero, val<int*> var_15, val<int*> var_16, val<int*> var_17, val<int*> var_18) {
    *var_15 = ((((((/* implicit */val<int>) ((-1369657800) > (var_0)))) <= (min((var_2), (var_10))))) ? (var_9) : (var_5));
    *var_16 = ((((((((/* implicit */val<bool>) ((121122954) | (875939956)))) ? (((val<int>) var_13)) : (((((/* implicit */val<bool>) 2147483647)) ? (var_6) : (var_3))))) + (2147483647))) << (((var_5) - (893168800))));
    *var_17 = var_0;
    *var_18 = var_6;
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1318767242;
int var_2 = 1209864957;
int var_3 = 774342536;
int var_5 = 893168800;
int var_6 = 1268593630;
int var_9 = -1900635891;
int var_10 = 1614710428;
int var_13 = -431062187;
int zero = 0;
int var_15 = -1266020087;
int var_16 = 246019459;
int var_17 = -1913192854;
int var_18 = -707588066;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != -1900635891;
    value_mismatch |= var_16 != 1716421460;
    value_mismatch |= var_17 != 1318767242;
    value_mismatch |= var_18 != 1268593630;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_3, var_5, var_6, var_9, var_10, var_13, zero, &var_15, &var_16, &var_17, &var_18);
  checksum();
}
