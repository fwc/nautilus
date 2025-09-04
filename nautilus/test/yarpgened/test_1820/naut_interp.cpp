/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 1820
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=1820
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
void test(val<unsigned int> var_2, val<short> var_3, val<unsigned short> var_5, val<unsigned short> var_7, val<unsigned short> var_9, val<int> var_10, val<int> var_12, val<int> var_15, val<long long int> var_16, val<unsigned short> var_18, val<int> zero, val<unsigned char*> var_19, val<unsigned char*> var_20, val<unsigned long long int*> var_21, val<signed char*> var_22) {
    *var_19 = ((/* implicit */val<unsigned char>) var_15);
    *var_20 = ((/* implicit */val<unsigned char>) min((((((/* implicit */val<int>) var_5)) >> (((/* implicit */val<int>) (!(((/* implicit */val<bool>) var_2))))))), (var_12)));
    *var_21 = ((/* implicit */val<unsigned long long int>) var_7);
    *var_22 = ((/* implicit */val<signed char>) min((*var_22), (((/* implicit */val<signed char>) ((((((((/* implicit */val<long long int>) var_2)) % (var_16))) < (((/* implicit */val<long long int>) var_10)))) ? (((/* implicit */val<int>) var_9)) : (((/* implicit */val<int>) min((min((((/* implicit */val<unsigned short>) (val<bool>)1)), (var_18))), (((/* implicit */val<unsigned short>) var_3))))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1419453305U;
short var_3 = (short)-2078;
unsigned short var_5 = (unsigned short)30519;
unsigned short var_7 = (unsigned short)59406;
unsigned short var_9 = (unsigned short)29458;
int var_10 = 438219146;
int var_12 = -153412707;
int var_15 = -1077311283;
long long int var_16 = -6254823885118524796LL;
unsigned short var_18 = (unsigned short)9677;
int zero = 0;
unsigned char var_19 = (unsigned char)95;
unsigned char var_20 = (unsigned char)254;
unsigned long long int var_21 = 3301608044161439770ULL;
signed char var_22 = (signed char)-86;
void init() {
}

void checksum() {
    value_mismatch |= var_19 != (unsigned char)205;
    value_mismatch |= var_20 != (unsigned char)157;
    value_mismatch |= var_21 != 59406ULL;
    value_mismatch |= var_22 != (signed char)-86;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_2, var_3, var_5, var_7, var_9, var_10, var_12, var_15, var_16, var_18, zero, &var_19, &var_20, &var_21, &var_22);
  checksum();
  assert(!value_mismatch);
}
