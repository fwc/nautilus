/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8968
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=8968
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
void test(val<int> var_0, val<unsigned char> var_6, val<signed char> var_7, val<unsigned long long int> var_12, val<signed char> var_17, val<int> zero, val<long long int*> var_19, val<signed char*> var_20, val<unsigned long long int*> var_21, val<unsigned long long int*> var_22, val<short*> var_23) {
    *var_19 |= ((/* implicit */val<long long int>) var_17);
    *var_20 = var_7;
    *var_21 = var_12;
    *var_22 = ((/* implicit */val<unsigned long long int>) var_0);
    *var_23 = ((/* implicit */val<short>) min((((/* implicit */val<long long int>) var_6)), (((((/* implicit */val<bool>) (val<unsigned char>)135)) ? (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_7))) : (((((/* implicit */val<bool>) 7492219127033704303ULL)) ? (255522176545744777LL) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) (val<signed char>)-79)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -328284575;
unsigned char var_6 = (unsigned char)85;
signed char var_7 = (signed char)-49;
unsigned long long int var_12 = 7456442705927848002ULL;
signed char var_17 = (signed char)60;
int zero = 0;
long long int var_19 = 7356627167063012283LL;
signed char var_20 = (signed char)-95;
unsigned long long int var_21 = 12933707210420296274ULL;
unsigned long long int var_22 = 11515267090412496448ULL;
short var_23 = (short)-568;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != 7356627167063012287LL;
    value_mismatch |= var_20 != (signed char)-49;
    value_mismatch |= var_21 != 7456442705927848002ULL;
    value_mismatch |= var_22 != 18446744073381267041ULL;
    value_mismatch |= var_23 != (short)-49;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_6, var_7, var_12, var_17, zero, &var_19, &var_20, &var_21, &var_22, &var_23);
  checksum();
}
