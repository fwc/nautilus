/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 2361
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=2361
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
void test(val<int> var_0, val<bool> var_5, val<unsigned long long int> var_6, val<unsigned int> var_8, val<signed char> var_9, val<int> zero, val<unsigned char*> var_18, val<bool*> var_19) {
    *var_18 &= ((/* implicit */val<unsigned char>) ((((/* implicit */val<int>) ((((/* implicit */val<bool>) 1259473154U)) && (((/* implicit */val<bool>) 0U))))) > (((((/* implicit */val<bool>) ((val<long long int>) (val<unsigned char>)255))) ? (var_0) : (((/* implicit */val<int>) ((val<unsigned char>) (val<unsigned char>)56)))))));
    *var_19 = ((var_8) <= (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) ((((var_5) ? (var_6) : (((/* implicit */val<unsigned long long int>) ((/* implicit */val<int>) var_9))))) <= (((/* implicit */val<unsigned long long int>) ((((/* implicit */val<bool>) 3035494142U)) ? (((/* implicit */val<int>) var_9)) : (var_0)))))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 62374951;
bool var_5 = (bool)1;
unsigned long long int var_6 = 4126366471455897101ULL;
unsigned int var_8 = 1318217727U;
signed char var_9 = (signed char)-5;
int zero = 0;
unsigned char var_18 = (unsigned char)48;
bool var_19 = (bool)1;
void init() {
}

void checksum() {
    value_mismatch |= var_18 != (unsigned char)0;
    value_mismatch |= var_19 != (bool)0;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_5, var_6, var_8, var_9, zero, &var_18, &var_19);
  checksum();
  assert(!value_mismatch);
}
