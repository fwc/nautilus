/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 7345
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=true --seed=7345
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
void test(val<bool> var_0, val<unsigned char> var_3, val<unsigned int> var_6, val<unsigned long long int> var_7, val<int> var_8, val<int> var_9, val<int> zero, val<unsigned short*> var_11, val<unsigned char*> var_12, val<unsigned char*> var_13) {
    *var_11 &= ((/* implicit */val<unsigned short>) ((val<short>) var_6));
    *var_12 = ((/* implicit */val<unsigned char>) ((((/* implicit */val<bool>) ((((/* implicit */val<bool>) min((((/* implicit */val<int>) (val<unsigned char>)169)), (var_8)))) ? (((/* implicit */val<unsigned int>) ((((/* implicit */val<int>) (val<unsigned char>)118)) % (var_8)))) : (((val<unsigned int>) var_0))))) ? ((~(max((var_9), (((/* implicit */val<int>) var_3)))))) : (((/* implicit */val<int>) (!(((/* implicit */val<bool>) min((((/* implicit */val<unsigned long long int>) var_3)), (var_7)))))))));
    *var_13 -= ((/* implicit */val<unsigned char>) (-((((!(((/* implicit */val<bool>) (val<unsigned char>)1)))) ? (((/* implicit */val<unsigned int>) ((/* implicit */val<int>) (val<bool>)1))) : ((((val<bool>)1) ? (var_6) : (var_6)))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

bool var_0 = (bool)0;
unsigned char var_3 = (unsigned char)3;
unsigned int var_6 = 806127315U;
unsigned long long int var_7 = 3351146142670637612ULL;
int var_8 = 120190199;
int var_9 = 1620830072;
int zero = 0;
unsigned short var_11 = (unsigned short)32118;
unsigned char var_12 = (unsigned char)241;
unsigned char var_13 = (unsigned char)108;
void init() {
}

void checksum() {
    value_mismatch |= var_11 != (unsigned short)1106;
    value_mismatch |= var_12 != (unsigned char)135;
    value_mismatch |= var_13 != (unsigned char)63;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_6, var_7, var_8, var_9, zero, &var_11, &var_12, &var_13);
  checksum();
}
