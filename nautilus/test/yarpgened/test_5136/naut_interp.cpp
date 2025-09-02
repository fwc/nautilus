/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5136
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=5136
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
void test(val<unsigned char> var_2, val<int> var_7, val<int> var_8, val<bool> var_11, val<unsigned char> var_12, val<long long int> var_13, val<int> zero, val<unsigned char*> var_14, val<unsigned char*> var_15, val<long long int*> var_16) {
    *var_14 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) var_13)) ? ((-(((/* implicit */val<int>) var_2)))) : (((/* implicit */val<int>) max(((val<unsigned char>)61), ((val<unsigned char>)22))))));
    *var_15 = ((/* implicit */val<unsigned char>) var_8);
    *var_16 = ((/* implicit */val<long long int>) ((((val<unsigned int>) (val<short>)-29916)) > (((/* implicit */val<unsigned int>) min((((/* implicit */val<int>) var_11)), (((((/* implicit */val<int>) var_12)) | (var_7))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)205;
int var_7 = -469949389;
int var_8 = -206346836;
bool var_11 = (bool)1;
unsigned char var_12 = (unsigned char)90;
long long int var_13 = -4404672634741949933LL;
int zero = 0;
unsigned char var_14 = (unsigned char)19;
unsigned char var_15 = (unsigned char)44;
long long int var_16 = -5154038065849343014LL;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (unsigned char)51;
    value_mismatch |= var_15 != (unsigned char)172;
    value_mismatch |= var_16 != 1LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_7, var_8, var_11, var_12, var_13, zero, &var_14, &var_15, &var_16);
  checksum();
  assert(!value_mismatch);
}
