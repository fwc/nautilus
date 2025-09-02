/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 4090
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=4090
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
void test(val<bool> var_0, val<bool> var_3, val<unsigned char> var_7, val<int> var_8, val<bool> var_12, val<long long int> var_14, val<unsigned char> var_18, val<signed char> var_19, val<int> zero, val<unsigned long long int*> var_20, val<unsigned short*> var_21) {
    *var_20 = ((/* implicit */val<unsigned long long int>) min((((((/* implicit */val<int>) max((((/* implicit */val<signed char>) var_12)), ((val<signed char>)31)))) >> (((val<unsigned long long int>) var_0)))), ((-(((((/* implicit */val<int>) var_18)) >> (((((/* implicit */val<int>) var_19)) + (141)))))))));
    *var_21 = ((/* implicit */val<unsigned short>) ((((((/* implicit */val<int>) (!(var_3)))) > (((/* implicit */val<int>) ((val<unsigned char>) var_8))))) ? (((/* implicit */val<int>) var_19)) : (((((/* implicit */val<bool>) ((((/* implicit */val<bool>) var_14)) ? (0U) : (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) var_3)))))) ? (((((/* implicit */val<bool>) (val<signed char>)-13)) ? (((/* implicit */val<int>) var_7)) : (((/* implicit */val<int>) (val<signed char>)-25)))) : ((-(var_8)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)0;
bool var_3 = (bool)0;
unsigned char var_7 = (unsigned char)163;
int var_8 = -1489289663;
bool var_12 = (bool)1;
long long int var_14 = 8476448588172907578LL;
unsigned char var_18 = (unsigned char)249;
signed char var_19 = (signed char)-117;
int zero = 0;
unsigned long long int var_20 = 580311616981324697ULL;
unsigned short var_21 = (unsigned short)23975;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != 0ULL;
    value_mismatch |= var_21 != (unsigned short)49599;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", true);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_7, var_8, var_12, var_14, var_18, var_19, zero, &var_20, &var_21);
  checksum();
  assert(!value_mismatch);
}
