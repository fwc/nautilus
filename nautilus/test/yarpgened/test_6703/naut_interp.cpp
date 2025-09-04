/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6703
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6703
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
void test(val<unsigned char> var_2, val<bool> var_3, val<unsigned short> var_7, val<long long int> var_12, val<signed char> var_14, val<unsigned char> var_15, val<int> zero, val<long long int*> var_16, val<unsigned long long int*> var_17, val<unsigned char*> var_18, val<unsigned long long int*> var_19, val<unsigned short*> var_20) {
    *var_16 += ((/* implicit */val<long long int>) var_2);
    *var_17 = ((/* implicit */val<unsigned long long int>) 432067207649146554LL);
    *var_18 = var_15;
    *var_19 = ((/* implicit */val<unsigned long long int>) (!(((/* implicit */val<bool>) ((((((/* implicit */val<bool>) var_14)) || (var_3))) ? (var_12) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_7))))))));
    *var_20 = ((/* implicit */val<unsigned short>) (~(((/* implicit */val<int>) (val<unsigned char>)0))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)122;
bool var_3 = (bool)0;
unsigned short var_7 = (unsigned short)36468;
long long int var_12 = 244223353534087819LL;
signed char var_14 = (signed char)84;
unsigned char var_15 = (unsigned char)169;
int zero = 0;
long long int var_16 = -856879325209330234LL;
unsigned long long int var_17 = 15386457123653670024ULL;
unsigned char var_18 = (unsigned char)138;
unsigned long long int var_19 = 14772719209103541298ULL;
unsigned short var_20 = (unsigned short)14891;
void init() {
}

void checksum() {
    value_mismatch |= var_16 != -856879325209330112LL;
    value_mismatch |= var_17 != 432067207649146554ULL;
    value_mismatch |= var_18 != (unsigned char)169;
    value_mismatch |= var_19 != 0ULL;
    value_mismatch |= var_20 != (unsigned short)65535;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_7, var_12, var_14, var_15, zero, &var_16, &var_17, &var_18, &var_19, &var_20);
  checksum();
  assert(!value_mismatch);
}
