/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 6918
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=6918
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
void test(val<signed char> var_0, val<unsigned char> var_1, val<unsigned long long int> var_2, val<unsigned short> var_4, val<unsigned long long int> var_6, val<unsigned int> var_7, val<int> zero, val<unsigned char*> var_10, val<signed char*> var_11, val<short*> var_12) {
    *var_10 = ((/* implicit */val<unsigned char>) max((var_2), (var_6)));
    *var_11 = ((/* implicit */val<signed char>) ((((/* implicit */val<unsigned long long int>) ((val<unsigned int>) ((((/* implicit */val<bool>) var_0)) ? (3ULL) : (((/* implicit */val<unsigned long long int>) var_7)))))) & (((min((var_2), (((/* implicit */val<unsigned long long int>) var_7)))) ^ (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_1)))))));
    *var_12 &= ((/* implicit */val<short>) max((((/* implicit */val<unsigned int>) var_0)), (((val<unsigned int>) ((((/* implicit */val<bool>) 16ULL)) ? (18446744073709551613ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_4))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)102;
unsigned char var_1 = (unsigned char)122;
unsigned long long int var_2 = 13983533803411521421ULL;
unsigned short var_4 = (unsigned short)33893;
unsigned long long int var_6 = 13329905457175774472ULL;
unsigned int var_7 = 4044374361U;
int zero = 0;
unsigned char var_10 = (unsigned char)183;
signed char var_11 = (signed char)2;
short var_12 = (short)10350;
void init() {
}

void checksum() {
    value_mismatch |= var_10 != (unsigned char)141;
    value_mismatch |= var_11 != (signed char)3;
    value_mismatch |= var_12 != (short)10348;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_1, var_2, var_4, var_6, var_7, zero, &var_10, &var_11, &var_12);
  checksum();
  assert(!value_mismatch);
}
