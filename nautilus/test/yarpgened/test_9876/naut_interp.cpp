/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9876
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9876
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
void test(val<unsigned char> var_1, val<unsigned long long int> var_2, val<signed char> var_7, val<unsigned short> var_18, val<int> zero, val<bool*> var_20, val<unsigned char*> var_21) {
    *var_20 = ((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) (val<short>)32750)) ? (((/* implicit */val<int>) var_1)) : (((/* implicit */val<int>) var_18))))) ? (min((((/* implicit */val<unsigned long long int>) 268173312U)), ((((val<bool>)1) ? (8704717473331765445ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<bool>)1))))))) : (((/* implicit */val<unsigned long long int>) ((val<long long int>) ((((/* implicit */val<bool>) 268173312U)) ? (((/* implicit */val<int>) (val<short>)32750)) : (((/* implicit */val<int>) (val<short>)-32750))))))));
    *var_21 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) 268173312U)) ? (8704717473331765445ULL) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) (val<unsigned char>)44)))))) ? (((val<unsigned long long int>) (val<short>)-32750)) : (((/* implicit */val<unsigned long long int>) (~(((/* implicit */val<int>) (val<signed char>)-7)))))))) ? (var_2) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_7)))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)204;
unsigned long long int var_2 = 12177848276651425400ULL;
signed char var_7 = (signed char)61;
unsigned short var_18 = (unsigned short)40000;
int zero = 0;
bool var_20 = (bool)0;
unsigned char var_21 = (unsigned char)76;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (bool)1;
    value_mismatch |= var_21 != (unsigned char)120;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_1, var_2, var_7, var_18, zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
