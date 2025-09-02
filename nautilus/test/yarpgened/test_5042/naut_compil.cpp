/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 5042
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=5042
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
void test(val<int> var_3, val<signed char> var_4, val<unsigned short> var_5, val<unsigned char> var_12, val<int> zero, val<unsigned long long int*> var_15, val<long long int*> var_16, val<bool*> var_17, val<bool*> var_18) {
    *var_15 = ((/* implicit */val<unsigned long long int>) ((((/* implicit */val<int>) min((((/* implicit */val<unsigned char>) (val<signed char>)-76)), ((val<unsigned char>)144)))) == ((~(((((/* implicit */val<int>) var_5)) >> (((((/* implicit */val<int>) var_12)) - (157)))))))));
    *var_16 = ((/* implicit */val<long long int>) (~(((/* implicit */val<int>) ((val<unsigned char>) var_4)))));
    *var_17 = ((/* implicit */val<bool>) max((*var_17), (((/* implicit */val<bool>) var_3))));
    *var_18 = (!(((/* implicit */val<bool>) (val<signed char>)0)));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1119106531;
signed char var_4 = (signed char)-121;
unsigned short var_5 = (unsigned short)61032;
unsigned char var_12 = (unsigned char)172;
int zero = 0;
unsigned long long int var_15 = 3430731202374214825ULL;
long long int var_16 = 2175342510903971329LL;
bool var_17 = (bool)1;
bool var_18 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_15 != 0ULL;
    value_mismatch |= var_16 != -136LL;
    value_mismatch |= var_17 != (bool)1;
    value_mismatch |= var_18 != (bool)1;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_4, var_5, var_12, zero, &var_15, &var_16, &var_17, &var_18);
  checksum();
  assert(!value_mismatch);
}
