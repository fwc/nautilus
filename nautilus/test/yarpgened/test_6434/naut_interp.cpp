/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6434
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6434
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
void test(val<bool> var_1, val<bool> var_3, val<signed char> var_6, val<unsigned char> var_7, val<long long int> var_10, val<unsigned int> var_12, val<unsigned char> var_14, val<int> zero, val<unsigned char*> var_19, val<short*> var_20, val<long long int*> var_21) {
    *var_19 = ((/* implicit */val<unsigned char>) min((*var_19), (((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) var_6)) ? (((/* implicit */val<long long int>) ((((/* implicit */val<int>) (val<unsigned short>)49832)) + (1286359676)))) : (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) 9192532036858290585LL)) ? (((/* implicit */val<int>) var_7)) : (((/* implicit */val<int>) var_3))))) ? (((/* implicit */val<long long int>) ((((/* implicit */val<bool>) (val<unsigned short>)51267)) ? (97487625U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<short>)549)))))) : (((((/* implicit */val<bool>) var_14)) ? (((/* implicit */val<long long int>) -1286359669)) : (var_10))))))))));
    *var_20 = ((/* implicit */val<short>) (!(((var_12) >= (((/* implicit */val<unsigned int>) (+(((/* implicit */val<int>) var_1)))))))));
    *var_21 += ((/* implicit */val<long long int>) (((~((-(((/* implicit */val<int>) var_7)))))) <= (((/* implicit */val<int>) var_1))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_1 = (bool)1;
bool var_3 = (bool)0;
signed char var_6 = (signed char)38;
unsigned char var_7 = (unsigned char)103;
long long int var_10 = -376016503265126729LL;
unsigned int var_12 = 3896838668U;
unsigned char var_14 = (unsigned char)191;
int zero = 0;
unsigned char var_19 = (unsigned char)74;
short var_20 = (short)23659;
long long int var_21 = 775631911779478934LL;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned char)36;
    value_mismatch |= var_20 != (short)0;
    value_mismatch |= var_21 != 775631911779478934LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_3, var_6, var_7, var_10, var_12, var_14, zero, &var_19, &var_20, &var_21);
  checksum();
}
