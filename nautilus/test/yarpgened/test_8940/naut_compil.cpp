/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 8940
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=8940
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
void test(val<unsigned short> var_0, val<signed char> var_2, val<unsigned int> var_5, val<unsigned long long int> var_8, val<long long int> var_11, val<long long int> var_13, val<int> zero, val<unsigned char*> var_14, val<unsigned char*> var_15, val<unsigned int*> var_16) {
    *var_14 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) var_11)) ? (((/* implicit */val<int>) ((((((/* implicit */val<bool>) 1532828506)) || (((/* implicit */val<bool>) var_0)))) || (((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_13)) ? (((/* implicit */val<unsigned long long int>) 1588549711)) : (var_8))))))) : (1192013013)));
    *var_15 += ((/* implicit */val<unsigned char>) (+(var_5)));
    *var_16 = ((/* implicit */val<unsigned int>) var_2);
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)14222;
signed char var_2 = (signed char)-71;
unsigned int var_5 = 564608543U;
unsigned long long int var_8 = 1003918921009341029ULL;
long long int var_11 = -4095345770456685733LL;
long long int var_13 = 2307604368236039620LL;
int zero = 0;
unsigned char var_14 = (unsigned char)211;
unsigned char var_15 = (unsigned char)119;
unsigned int var_16 = 762759213U;
void init() {
}

void checksum() {
    value_mismatch |= var_14 != (unsigned char)1;
    value_mismatch |= var_15 != (unsigned char)150;
    value_mismatch |= var_16 != 4294967225U;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_2, var_5, var_8, var_11, var_13, zero, &var_14, &var_15, &var_16);
  checksum();
}
