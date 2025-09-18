/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1172
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=1172
*/

#include <nautilus/core.hpp>
#include <nautilus/Engine.hpp>
#include <cassert>
#ifndef USE_COMPILATION
#define USE_COMPILATION true
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
void test(val<unsigned char> var_0, val<unsigned long long int> var_5, val<bool> var_11, val<int> var_16, val<int> zero, val<unsigned long long int*> var_19, val<signed char*> var_20, val<int*> var_21, val<bool*> var_22, val<signed char*> var_23) {
    *var_19 = ((/* implicit */val<unsigned long long int>) var_0);
    *var_20 = ((/* implicit */val<signed char>) var_11);
    *var_21 = var_16;
    *var_22 = ((/* implicit */val<bool>) ((((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (!(((/* implicit */val<bool>) (val<unsigned char>)129)))))) - (var_5)));
    *var_23 |= ((/* implicit */val<signed char>) (val<unsigned char>)109);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)28;
unsigned long long int var_5 = 5543184054019229407ULL;
bool var_11 = (bool)1;
int var_16 = 846757794;
int zero = 0;
unsigned long long int var_19 = 8860130136394992112ULL;
signed char var_20 = (signed char)-54;
int var_21 = 1423542135;
bool var_22 = (bool)0;
signed char var_23 = (signed char)84;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 28ULL;
    value_mismatch |= var_20 != (signed char)1;
    value_mismatch |= var_21 != 846757794;
    value_mismatch |= var_22 != (bool)1;
    value_mismatch |= var_23 != (signed char)125;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_5, var_11, var_16, zero, &var_19, &var_20, &var_21, &var_22, &var_23);
  checksum();
}
