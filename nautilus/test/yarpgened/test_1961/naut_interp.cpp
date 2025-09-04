/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1961
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1961
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
void test(val<int> var_0, val<unsigned char> var_1, val<unsigned char> var_2, val<unsigned long long int> var_3, val<signed char> var_5, val<bool> var_11, val<int> zero, val<long long int*> var_15, val<unsigned short*> var_16, val<long long int*> var_17) {
    *var_15 = ((/* implicit */val<long long int>) min((max((max((var_3), (((/* implicit */val<unsigned long long int>) var_5)))), (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) (val<unsigned char>)163)) + (((/* implicit */val<int>) var_5))))))), (((/* implicit */val<unsigned long long int>) var_0))));
    *var_16 = ((/* implicit */val<unsigned short>) (~(((var_11) ? (((((/* implicit */val<bool>) var_1)) ? (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_5))) : (4398046248960ULL))) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_2)))))));
    *var_17 = ((/* implicit */val<long long int>) var_0);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1695373119;
unsigned char var_1 = (unsigned char)181;
unsigned char var_2 = (unsigned char)158;
unsigned long long int var_3 = 10517260907760305326ULL;
signed char var_5 = (signed char)121;
bool var_11 = (bool)1;
int zero = 0;
long long int var_15 = -4321947543562945951LL;
unsigned short var_16 = (unsigned short)7208;
long long int var_17 = 7764118379310706903LL;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != -7929483165949246290LL;
    value_mismatch |= var_16 != (unsigned short)65414;
    value_mismatch |= var_17 != -1695373119LL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_3, var_5, var_11, zero, &var_15, &var_16, &var_17);
  checksum();
  assert(!value_mismatch);
}
