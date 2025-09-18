/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2012
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2012
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
void test(val<unsigned short> var_1, val<long long int> var_2, val<unsigned char> var_3, val<unsigned short> var_4, val<short> var_6, val<int> zero, val<bool*> var_12, val<unsigned long long int*> var_13) {
    *var_12 = (val<bool>)0;
    *var_13 = ((/* implicit */val<unsigned long long int>) min((((((((/* implicit */val<bool>) var_2)) ? (((/* implicit */val<int>) (val<signed char>)10)) : (((/* implicit */val<int>) var_3)))) % (((/* implicit */val<int>) ((((/* implicit */val<int>) var_4)) >= (((/* implicit */val<int>) var_6))))))), (((/* implicit */val<int>) var_1))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)34035;
long long int var_2 = -6617868737502625918LL;
unsigned char var_3 = (unsigned char)178;
unsigned short var_4 = (unsigned short)18278;
short var_6 = (short)-24569;
int zero = 0;
bool var_12 = (bool)0;
unsigned long long int var_13 = 8623126976307866722ULL;
void init() {
}

void checksum() {
    value_mismatch |= var_12 != (bool)0;
    value_mismatch |= var_13 != 0ULL;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_3, var_4, var_6, zero, &var_12, &var_13);
  checksum();
}
