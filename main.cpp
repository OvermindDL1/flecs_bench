#include "flecs.h"

#define NONIUS_RUNNER // Define a `main` for us here, could do it ourselves and
                      // call into nonius, but why bother...
#include "nonius.hpp"

typedef struct {
  ecs_entity_t value;
} Comp_A;
typedef struct {
  ecs_entity_t value;
} Comp_B;
typedef struct {
  ecs_entity_t value;
} Comp_C;
typedef struct {
  ecs_entity_t value;
} Comp_D;
typedef struct {
  ecs_entity_t value;
} Comp_E;
typedef struct {
  ecs_entity_t value;
} Comp_F;
typedef struct {
  ecs_entity_t value;
} Comp_G;
typedef struct {
  ecs_entity_t value;
} Comp_H;

typedef struct {
  ecs_entity_t value;
} Comp_I;
typedef struct {
  ecs_entity_t value;
} Comp_J;
typedef struct {
  ecs_entity_t value;
} Comp_K;
typedef struct {
  ecs_entity_t value;
} Comp_L;
typedef struct {
  ecs_entity_t value;
} Comp_M;
typedef struct {
  ecs_entity_t value;
} Comp_N;
typedef struct {
  ecs_entity_t value;
} Comp_O;
typedef struct {
  ecs_entity_t value;
} Comp_P;

typedef struct {
  ecs_entity_t value;
} Comp_Q;

ECS_COMPONENT_DECLARE(Comp_A);
ECS_COMPONENT_DECLARE(Comp_B);
ECS_COMPONENT_DECLARE(Comp_C);
ECS_COMPONENT_DECLARE(Comp_D);
ECS_COMPONENT_DECLARE(Comp_E);
ECS_COMPONENT_DECLARE(Comp_F);
ECS_COMPONENT_DECLARE(Comp_G);
ECS_COMPONENT_DECLARE(Comp_H);

ECS_COMPONENT_DECLARE(Comp_I);
ECS_COMPONENT_DECLARE(Comp_J);
ECS_COMPONENT_DECLARE(Comp_K);
ECS_COMPONENT_DECLARE(Comp_L);
ECS_COMPONENT_DECLARE(Comp_M);
ECS_COMPONENT_DECLARE(Comp_N);
ECS_COMPONENT_DECLARE(Comp_O);
ECS_COMPONENT_DECLARE(Comp_P);

ECS_COMPONENT_DECLARE(Comp_Q);

ECS_TAG_DECLARE(Tag_A);
ECS_TAG_DECLARE(Tag_B);
ECS_TAG_DECLARE(Tag_C);
ECS_TAG_DECLARE(Tag_D);
ECS_TAG_DECLARE(Tag_E);
ECS_TAG_DECLARE(Tag_F);
ECS_TAG_DECLARE(Tag_G);
ECS_TAG_DECLARE(Tag_H);

ECS_TAG_DECLARE(Tag_I);
ECS_TAG_DECLARE(Tag_J);
ECS_TAG_DECLARE(Tag_K);
ECS_TAG_DECLARE(Tag_L);
ECS_TAG_DECLARE(Tag_M);
ECS_TAG_DECLARE(Tag_N);
ECS_TAG_DECLARE(Tag_O);
ECS_TAG_DECLARE(Tag_P);

ECS_TYPE_DECLARE(Type4);
ECS_TYPE_DECLARE(Type8);
ECS_TYPE_DECLARE(Type16);

ECS_TYPE_DECLARE(TagType4);
ECS_TYPE_DECLARE(TagType8);
ECS_TYPE_DECLARE(TagType16);

ECS_TYPE_DECLARE(TypeAll);

ECS_CTOR(Comp_A, ptr, { ptr->value = 0; });

ECS_COPY(Comp_A, dst, src, { dst->value = src->value; });

static void Sys_A(ecs_iter_t *it) {}
static void Sys_B(ecs_iter_t *it) {}
static void Sys_C(ecs_iter_t *it) {}
static void Sys_D(ecs_iter_t *it) {}
static void Sys_E(ecs_iter_t *it) {}
static void Sys_F(ecs_iter_t *it) {}
static void Sys_G(ecs_iter_t *it) {}
static void Sys_H(ecs_iter_t *it) {}

static void Sys_I(ecs_iter_t *it) {}
static void Sys_J(ecs_iter_t *it) {}
static void Sys_K(ecs_iter_t *it) {}
static void Sys_L(ecs_iter_t *it) {}
static void Sys_M(ecs_iter_t *it) {}
static void Sys_N(ecs_iter_t *it) {}
static void Sys_O(ecs_iter_t *it) {}
static void Sys_P(ecs_iter_t *it) {}

static ecs_world_t *world_init() {
  ecs_world_t *w = ecs_init();

  ECS_COMPONENT_DEFINE(w, Comp_A);
  ECS_COMPONENT_DEFINE(w, Comp_B);
  ECS_COMPONENT_DEFINE(w, Comp_C);
  ECS_COMPONENT_DEFINE(w, Comp_D);
  ECS_COMPONENT_DEFINE(w, Comp_E);
  ECS_COMPONENT_DEFINE(w, Comp_F);
  ECS_COMPONENT_DEFINE(w, Comp_G);
  ECS_COMPONENT_DEFINE(w, Comp_H);
  ECS_COMPONENT_DEFINE(w, Comp_I);

  ECS_COMPONENT_DEFINE(w, Comp_J);
  ECS_COMPONENT_DEFINE(w, Comp_K);
  ECS_COMPONENT_DEFINE(w, Comp_L);
  ECS_COMPONENT_DEFINE(w, Comp_M);
  ECS_COMPONENT_DEFINE(w, Comp_N);
  ECS_COMPONENT_DEFINE(w, Comp_O);
  ECS_COMPONENT_DEFINE(w, Comp_P);

  ECS_COMPONENT_DEFINE(w, Comp_Q);

  ECS_TAG_DEFINE(w, Tag_A);
  ECS_TAG_DEFINE(w, Tag_B);
  ECS_TAG_DEFINE(w, Tag_C);
  ECS_TAG_DEFINE(w, Tag_D);
  ECS_TAG_DEFINE(w, Tag_E);
  ECS_TAG_DEFINE(w, Tag_F);
  ECS_TAG_DEFINE(w, Tag_G);
  ECS_TAG_DEFINE(w, Tag_H);

  ECS_TAG_DEFINE(w, Tag_I);
  ECS_TAG_DEFINE(w, Tag_J);
  ECS_TAG_DEFINE(w, Tag_K);
  ECS_TAG_DEFINE(w, Tag_L);
  ECS_TAG_DEFINE(w, Tag_M);
  ECS_TAG_DEFINE(w, Tag_N);
  ECS_TAG_DEFINE(w, Tag_O);
  ECS_TAG_DEFINE(w, Tag_P);

  ECS_TYPE_DEFINE(w, Type4, Comp_A, Comp_B, Comp_C, Comp_D);
  ECS_TYPE_DEFINE(w, Type8, Comp_A, Comp_B, Comp_C, Comp_D, Comp_E, Comp_F,
                  Comp_G, Comp_H);
  ECS_TYPE_DEFINE(w, Type16, Comp_A, Comp_B, Comp_C, Comp_D, Comp_E, Comp_F,
                  Comp_G, Comp_H, Comp_I, Comp_J, Comp_K, Comp_L, Comp_M,
                  Comp_N, Comp_O, Comp_P);

  ECS_TYPE_DEFINE(w, TagType4, Tag_A, Tag_B, Tag_C, Tag_D);
  ECS_TYPE_DEFINE(w, TagType8, Tag_A, Tag_B, Tag_C, Tag_D, Tag_E, Tag_F, Tag_G,
                  Tag_H);
  ECS_TYPE_DEFINE(w, TagType16, Tag_A, Tag_B, Tag_C, Tag_D, Tag_E, Tag_F, Tag_G,
                  Tag_H, Tag_I, Tag_J, Tag_K, Tag_L, Tag_M, Tag_N, Tag_O,
                  Tag_P);

  ECS_TYPE_DEFINE(w, TypeAll, AND | Type16, AND | TagType16);

  return w;
}

void create_recycled_entities(ecs_world_t *world, int32_t count) {
  const ecs_entity_t *ids_tmp = ecs_bulk_new(world, 0, count);
  ecs_entity_t *ids = (ecs_entity_t *)malloc(sizeof(ecs_entity_t) * count);
  memcpy(ids, ids_tmp, sizeof(ecs_entity_t) * count);
  for (int i = 0; i < count; i++) {
    ecs_delete(world, ids[i]);
  }
  ecs_os_free(ids);
}

NONIUS_BENCHMARK("flecs_new_id", [](nonius::chronometer meter) {
  ecs_world_t *world = world_init();

  ecs_dim(world, meter.runs());

  // We return it to black box the value so it doesn't optimize out, this way
  // we don't have to perform our own black_boxing as nonius does it for us.
  meter.measure([&world] { return ecs_new_id(world); });

  ecs_fini(world);
});

NONIUS_BENCHMARK("flecs_new_id_recycle", [](nonius::chronometer meter) {
  ecs_world_t *world = world_init();

  ecs_dim(world, meter.runs());

  create_recycled_entities(world, meter.runs());

  meter.measure([&world] { return ecs_new_id(world); });

  ecs_fini(world);
});

NONIUS_BENCHMARK("flecs_new_w_entity", [](nonius::chronometer meter) {
  ecs_world_t *world = world_init();

  ecs_dim(world, meter.runs());
  ecs_dim_type(world, ecs_type(Comp_A), meter.runs());

  meter.measure(
      [&world] { return ecs_new_w_entity(world, ecs_entity(Comp_A)); });

  ecs_fini(world);
});

/*
NONIUS_BENCHMARK("flecs_new_1_comp", [](nonius::chronometer meter) {
  ecs_world_t *world = world_init();

  ecs_dim(world, meter.runs());
  ecs_dim_type(world, ecs_type(Comp_A), meter.runs());

  meter.measure([&world] { ecs_new(world, Comp_A); });

  ecs_fini(world);
});
*/

/*
void flecs_new_n_comp<F>(nonius::chronometer meter, ecs_world_t *world,
                         ecs_type_t type,
                         F setter) { // ecs_entities_t *shape, void *data) {
  ecs_dim(world, meter.runs());
  ecs_dim_type(world, type, meter.runs());

  meter.measure([&world, type, shape, data] {
    // return ecs_new_w_type(world, type);
    // return ecs_bulk_new_w_data(world, 1, shape, data);
    void entity = ecs_new_w_type(world, type);
    setter(entity);
    return entity;
  });

  ecs_fini(world);
}
*/

#undef ecs_set // The existing one is broken, taking reference of temporary
#define ecs_set(world, e, comp, init)                                          \
  {                                                                            \
    comp c init;                                                               \
    ecs_set_ptr_w_entity(world, e, ecs_entity(comp), sizeof(comp), &c);        \
  }

NONIUS_BENCHMARK("flecs_new_1_comp", [](nonius::chronometer meter) {
  ecs_world_t *world = world_init();
  // flecs_new_n_comp(meter, world, ecs_type(Comp_A));
  // ecs_entity_t shape_data[] = {ecs_entity(Comp_A)};
  // ecs_entities_t shape = {.array = shape_data, .count = 1};
  // Comp_A a[] = {{1}};
  // void *data[] = {&a};
  // flecs_new_n_comp(meter, world, ecs_type(Comp_A), &shape, &data);
  // flecs_new_n_comp(meter, world, ecs_type(Comp_A), [](ecs_entity_t e) {
  //		  Comp_A *ptr = (Comp_A*)ecs_get_ref_w_entity(world, &refs[e],
  // ids[e], comp);
  //		  });
  ecs_dim_type(world, ecs_type(Comp_A), meter.runs());
  meter.measure([&world] {
    ecs_entity_t e = ecs_new_w_type(world, ecs_type(Comp_A));
    // Comp_A a{e};
    // ecs_set(world, e, Comp_A, a);
    ecs_set(world, e, Comp_A, {e});
    return e;
  });
  ecs_fini(world);
});

NONIUS_BENCHMARK("flecs_new_4_comp", [](nonius::chronometer meter) {
  ecs_world_t *world = world_init();
  // flecs_new_n_comp(meter, world, ecs_type(Type4));
  // ecs_entity_t shape_data[] = {ecs_entity(Comp_A), ecs_entity(Comp_B),
  //                             ecs_entity(Comp_C), ecs_entity(Comp_D)};
  // ecs_entities_t shape = {.array = shape_data, .count = 4};
  // Comp_A a[] = {{1}};
  // Comp_B b[] = {{1}};
  // Comp_C c[] = {{1}};
  // Comp_D d[] = {{1}};
  // void *data[] = {&a, &b, &c, &d};
  // flecs_new_n_comp(meter, world, ecs_type(Type4), &shape, &data);
  ecs_dim_type(world, ecs_type(Type4), meter.runs());
  meter.measure([&world] {
    ecs_entity_t e = ecs_new_w_type(world, ecs_type(Type4));
    ecs_set(world, e, Comp_A, {e});
    ecs_set(world, e, Comp_B, {e});
    ecs_set(world, e, Comp_C, {e});
    ecs_set(world, e, Comp_D, {e});
    // ecs_set(world, e, Comp_A, Comp_A{e});
    // ecs_set(world, e, Comp_B, {e});
    // ecs_set(world, e, Comp_C, {e});
    // ecs_set(world, e, Comp_D, {e});
    return e;
  });
  ecs_fini(world);
});

NONIUS_BENCHMARK("flecs_new_8_comp", [](nonius::chronometer meter) {
  ecs_world_t *world = world_init();
  ecs_dim_type(world, ecs_type(Type8), meter.runs());
  meter.measure([&world] {
    ecs_entity_t e = ecs_new_w_type(world, ecs_type(Type8));
    ecs_set(world, e, Comp_A, {e});
    ecs_set(world, e, Comp_B, {e});
    ecs_set(world, e, Comp_C, {e});
    ecs_set(world, e, Comp_D, {e});
    ecs_set(world, e, Comp_E, {e});
    ecs_set(world, e, Comp_F, {e});
    ecs_set(world, e, Comp_G, {e});
    ecs_set(world, e, Comp_H, {e});
    return e;
  });
  ecs_fini(world);
});

NONIUS_BENCHMARK("flecs_new_16_comp", [](nonius::chronometer meter) {
  ecs_world_t *world = world_init();
  ecs_dim_type(world, ecs_type(Type16), meter.runs());
  meter.measure([&world] {
    ecs_entity_t e = ecs_new_w_type(world, ecs_type(Type16));
    ecs_set(world, e, Comp_A, {e});
    ecs_set(world, e, Comp_B, {e});
    ecs_set(world, e, Comp_C, {e});
    ecs_set(world, e, Comp_D, {e});
    ecs_set(world, e, Comp_E, {e});
    ecs_set(world, e, Comp_F, {e});
    ecs_set(world, e, Comp_G, {e});
    ecs_set(world, e, Comp_H, {e});
    ecs_set(world, e, Comp_I, {e});
    ecs_set(world, e, Comp_J, {e});
    ecs_set(world, e, Comp_K, {e});
    ecs_set(world, e, Comp_L, {e});
    ecs_set(world, e, Comp_M, {e});
    ecs_set(world, e, Comp_N, {e});
    ecs_set(world, e, Comp_O, {e});
    ecs_set(world, e, Comp_P, {e});
    return e;
  });
  ecs_fini(world);
});

/*
NONIUS_BENCHMARK("flecs_new_8_comp", [](nonius::chronometer meter) {
  ecs_world_t *world = world_init();
  flecs_new_n_comp(meter, world, ecs_type(Type8));
});

NONIUS_BENCHMARK("flecs_new_16_comp", [](nonius::chronometer meter) {
  ecs_world_t *world = world_init();
  flecs_new_n_comp(meter, world, ecs_type(Type16));
});
*/

NONIUS_BENCHMARK("flecs_bulk_new_id", [](nonius::chronometer meter) {
  ecs_world_t *world = world_init();

  ecs_dim(world, meter.runs());

  meter.measure(
      [&world, &meter] { return ecs_bulk_new(world, 0, meter.runs()); });

  ecs_fini(world);
});

NONIUS_BENCHMARK("flecs_bulk_new_id_recycle", [](nonius::chronometer meter) {
  ecs_world_t *world = world_init();

  ecs_dim(world, meter.runs());

  create_recycled_entities(world, meter.runs());

  meter.measure(
      [&world, &meter] { return ecs_bulk_new(world, 0, meter.runs()); });

  ecs_fini(world);
});

void flecs_bulk_new_n_comp(nonius::chronometer meter, ecs_world_t *world,
                           ecs_type_t type) {
  ecs_dim(world, meter.runs());
  ecs_dim_type(world, type, meter.runs());

  meter.measure([&world, type, &meter] {
    return ecs_bulk_new_w_type(world, type, meter.runs());
  });

  ecs_fini(world);
}

NONIUS_BENCHMARK("flecs_bulk_new_1_comp", [](nonius::chronometer meter) {
  ecs_world_t *world = world_init();
  flecs_bulk_new_n_comp(meter, world, ecs_type(Comp_A));
});

NONIUS_BENCHMARK("flecs_bulk_new_4_comp", [](nonius::chronometer meter) {
  ecs_world_t *world = world_init();
  flecs_bulk_new_n_comp(meter, world, ecs_type(Type4));
});

NONIUS_BENCHMARK("flecs_bulk_new_8_comp", [](nonius::chronometer meter) {
  ecs_world_t *world = world_init();
  flecs_bulk_new_n_comp(meter, world, ecs_type(Type8));
});

NONIUS_BENCHMARK("flecs_bulk_new_16_comp", [](nonius::chronometer meter) {
  ecs_world_t *world = world_init();
  flecs_bulk_new_n_comp(meter, world, ecs_type(Type16));
});

NONIUS_BENCHMARK("flecs_delete_id", [](nonius::chronometer meter) {
  ecs_world_t *world = world_init();
  auto runs = meter.runs();
  std::vector<ecs_entity_t> entities;
  for (int i = 0; i < runs; i++)
    entities.push_back(ecs_new_id(world));
  int i = 0;
  meter.measure([&world, &entities, &i] { ecs_delete(world, entities[i++]); });
  ecs_fini(world);
});

NONIUS_BENCHMARK("flecs_is_alive_for_nonexist", [](nonius::chronometer meter) {
  ecs_world_t *world = world_init();
  int i = 0;
  meter.measure([&world, &i] { return ecs_is_alive(world, i++); });
  ecs_fini(world);
});
