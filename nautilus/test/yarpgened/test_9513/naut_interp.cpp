/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9513
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9513
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
void test(val<bool> var_3, val<long long int> var_9, val<long long int> var_10, val<unsigned char> var_12, val<short> var_16, val<short> var_17, val<int> zero, val<unsigned short*> var_18, val<signed char*> var_19, val<unsigned char*> var_20, val<unsigned short*> var_21) {
    *var_18 |= ((/* implicit */val<unsigned short>) var_12);
    *var_19 = ((/* implicit */val<signed char>) min((*var_19), (((/* implicit */val<signed char>) var_16))));
    *var_20 = ((/* implicit */val<unsigned char>) min((*var_20), (((/* implicit */val<unsigned char>) min((((val<short>) (+(((/* implicit */val<int>) var_3))))), (((/* implicit */val<short>) (!(((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_9)) ? (var_10) : (((/* implicit */val<long long int>) ((/* implicit */val<int>) var_17))))))))))))));
    *var_21 = ((/* implicit */val<unsigned short>) max((*var_21), (((/* implicit */val<unsigned short>) var_10))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_3 = (bool)1;
long long int var_9 = 3533916682229151416LL;
long long int var_10 = 4371630788211171508LL;
unsigned char var_12 = (unsigned char)140;
short var_16 = (short)-24401;
short var_17 = (short)14678;
int zero = 0;
unsigned short var_18 = (unsigned short)41484;
signed char var_19 = (signed char)27;
unsigned char var_20 = (unsigned char)84;
unsigned short var_21 = (unsigned short)29635;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned short)41612;
    value_mismatch |= var_19 != (signed char)-81;
    value_mismatch |= var_20 != (unsigned char)0;
    value_mismatch |= var_21 != (unsigned short)57524;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_3, var_9, var_10, var_12, var_16, var_17, zero, &var_18, &var_19, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
