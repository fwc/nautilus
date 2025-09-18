/*
yarpgen version 2.0 (build 5412501 on 2025:08:21)
Seed: 9457
Invocation: /home/mgoerdel/inspos/yarpgen/build/yarpgen --nautilus=true --use-compilation=false --seed=9457
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
void test(val<unsigned short> var_0, val<bool> var_3, val<unsigned char> var_4, val<unsigned short> var_5, val<long long int> var_9, val<bool> var_14, val<short> var_17, val<unsigned short> var_19, val<int> zero, val<unsigned short*> var_20, val<unsigned long long int*> var_21, val<int*> var_22, val<short*> var_23) {
    *var_20 ^= ((/* implicit */val<unsigned short>) (~(((/* implicit */val<int>) var_17))));
    *var_21 = ((/* implicit */val<unsigned long long int>) min((*var_21), (((/* implicit */val<unsigned long long int>) ((((((/* implicit */val<int>) max(((val<unsigned short>)44944), (((/* implicit */val<unsigned short>) var_4))))) / (((/* implicit */val<int>) (val<short>)-3477)))) - (max((((((/* implicit */val<int>) (val<unsigned short>)20592)) * (((/* implicit */val<int>) var_5)))), (((/* implicit */val<int>) var_19)))))))));
    *var_22 = (~(((/* implicit */val<int>) min(((val<unsigned short>)20584), (((/* implicit */val<unsigned short>) (val<short>)-3469))))));
    *var_23 += ((/* implicit */val<short>) ((((/* implicit */val<bool>) (+(var_9)))) ? (((((((/* implicit */val<int>) min((((/* implicit */val<short>) var_14)), ((val<short>)-31484)))) + (2147483647))) >> (((/* implicit */val<int>) ((val<bool>) var_0))))) : ((-(((/* implicit */val<int>) var_3))))));
}
static bool value_mismatch = false;
unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)32414;
bool var_3 = (bool)0;
unsigned char var_4 = (unsigned char)204;
unsigned short var_5 = (unsigned short)18844;
long long int var_9 = 3506869097861305751LL;
bool var_14 = (bool)1;
short var_17 = (short)-20810;
unsigned short var_19 = (unsigned short)13075;
int zero = 0;
unsigned short var_20 = (unsigned short)32638;
unsigned long long int var_21 = 17961780368588696359ULL;
int var_22 = -1249305386;
short var_23 = (short)-15012;
void init() {
}

void checksum() {
    value_mismatch |= var_20 != (unsigned short)11831;
    value_mismatch |= var_21 != 17961780368588696359ULL;
    value_mismatch |= var_22 != -20585;
    value_mismatch |= var_23 != (short)-30755;
}
int main() {
  init();
  engine::Options options;
  options.setOption("engine.Compilation", USE_COMPILATION);
  options.setOption("dump.all", false);
  auto engine = engine::NautilusEngine(options);
  auto function = engine.registerFunction(test);
  function(var_0, var_3, var_4, var_5, var_9, var_14, var_17, var_19, zero, &var_20, &var_21, &var_22, &var_23);
  checksum();
}
