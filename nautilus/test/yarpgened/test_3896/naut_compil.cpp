/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 3896
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=3896
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
void test(val<bool> var_3, val<unsigned short> var_5, val<bool> var_6, val<int> var_7, val<long long int> var_8, val<bool> var_9, val<int> zero, val<unsigned char*> var_10, val<bool*> var_11) {
    *var_10 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<long long int>) ((((/* implicit */val<bool>) var_5)) ? (((/* implicit */val<int>) min((((/* implicit */val<short>) var_9)), ((val<short>)-15854)))) : (((/* implicit */val<int>) (!(var_3))))))) | (((max((var_8), (((/* implicit */val<long long int>) -92115853)))) + (((/* implicit */val<long long int>) ((var_7) - (((/* implicit */val<int>) (val<unsigned char>)4)))))))));
    *var_11 = ((/* implicit */val<bool>) min((*var_11), (var_6)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_3 = (bool)1;
unsigned short var_5 = (unsigned short)35876;
bool var_6 = (bool)1;
int var_7 = -2076109223;
long long int var_8 = -8629894793627203347LL;
bool var_9 = (bool)1;
int zero = 0;
unsigned char var_10 = (unsigned char)214;
bool var_11 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (unsigned char)218;
    value_mismatch |= var_11 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_5, var_6, var_7, var_8, var_9, zero, &var_10, &var_11);
  checksum();
  assert(!value_mismatch);
}
