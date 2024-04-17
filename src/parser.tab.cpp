/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1





# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser.tab.hpp"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENTIFIER = 3,                 /* IDENTIFIER  */
  YYSYMBOL_NUMBER = 4,                     /* NUMBER  */
  YYSYMBOL_FLOAT_NUMBER = 5,               /* FLOAT_NUMBER  */
  YYSYMBOL_STRING_LITERAL = 6,             /* STRING_LITERAL  */
  YYSYMBOL_SIZEOF = 7,                     /* SIZEOF  */
  YYSYMBOL_PTR_OP = 8,                     /* PTR_OP  */
  YYSYMBOL_INC_OP = 9,                     /* INC_OP  */
  YYSYMBOL_DEC_OP = 10,                    /* DEC_OP  */
  YYSYMBOL_LEFT_OP = 11,                   /* LEFT_OP  */
  YYSYMBOL_RIGHT_OP = 12,                  /* RIGHT_OP  */
  YYSYMBOL_LE_OP = 13,                     /* LE_OP  */
  YYSYMBOL_GE_OP = 14,                     /* GE_OP  */
  YYSYMBOL_EQ_OP = 15,                     /* EQ_OP  */
  YYSYMBOL_NE_OP = 16,                     /* NE_OP  */
  YYSYMBOL_AND_OP = 17,                    /* AND_OP  */
  YYSYMBOL_OR_OP = 18,                     /* OR_OP  */
  YYSYMBOL_MUL_ASSIGN = 19,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 20,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 21,                /* MOD_ASSIGN  */
  YYSYMBOL_ADD_ASSIGN = 22,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 23,                /* SUB_ASSIGN  */
  YYSYMBOL_LEFT_ASSIGN = 24,               /* LEFT_ASSIGN  */
  YYSYMBOL_RIGHT_ASSIGN = 25,              /* RIGHT_ASSIGN  */
  YYSYMBOL_AND_ASSIGN = 26,                /* AND_ASSIGN  */
  YYSYMBOL_XOR_ASSIGN = 27,                /* XOR_ASSIGN  */
  YYSYMBOL_OR_ASSIGN = 28,                 /* OR_ASSIGN  */
  YYSYMBOL_TYPE_NAME = 29,                 /* TYPE_NAME  */
  YYSYMBOL_TYPEDEF = 30,                   /* TYPEDEF  */
  YYSYMBOL_EXTERN = 31,                    /* EXTERN  */
  YYSYMBOL_STATIC = 32,                    /* STATIC  */
  YYSYMBOL_AUTO = 33,                      /* AUTO  */
  YYSYMBOL_REGISTER = 34,                  /* REGISTER  */
  YYSYMBOL_CHAR = 35,                      /* CHAR  */
  YYSYMBOL_SHORT = 36,                     /* SHORT  */
  YYSYMBOL_INT = 37,                       /* INT  */
  YYSYMBOL_LONG = 38,                      /* LONG  */
  YYSYMBOL_SIGNED = 39,                    /* SIGNED  */
  YYSYMBOL_UNSIGNED = 40,                  /* UNSIGNED  */
  YYSYMBOL_FLOAT = 41,                     /* FLOAT  */
  YYSYMBOL_DOUBLE = 42,                    /* DOUBLE  */
  YYSYMBOL_CONST = 43,                     /* CONST  */
  YYSYMBOL_VOLATILE = 44,                  /* VOLATILE  */
  YYSYMBOL_VOID = 45,                      /* VOID  */
  YYSYMBOL_STRUCT = 46,                    /* STRUCT  */
  YYSYMBOL_UNION = 47,                     /* UNION  */
  YYSYMBOL_ENUM = 48,                      /* ENUM  */
  YYSYMBOL_ELLIPSIS = 49,                  /* ELLIPSIS  */
  YYSYMBOL_CASE = 50,                      /* CASE  */
  YYSYMBOL_DEFAULT = 51,                   /* DEFAULT  */
  YYSYMBOL_IF = 52,                        /* IF  */
  YYSYMBOL_ELSE = 53,                      /* ELSE  */
  YYSYMBOL_SWITCH = 54,                    /* SWITCH  */
  YYSYMBOL_WHILE = 55,                     /* WHILE  */
  YYSYMBOL_DO = 56,                        /* DO  */
  YYSYMBOL_FOR = 57,                       /* FOR  */
  YYSYMBOL_GOTO = 58,                      /* GOTO  */
  YYSYMBOL_CONTINUE = 59,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 60,                     /* BREAK  */
  YYSYMBOL_RETURN = 61,                    /* RETURN  */
  YYSYMBOL_62_ = 62,                       /* '('  */
  YYSYMBOL_63_ = 63,                       /* ')'  */
  YYSYMBOL_64_ = 64,                       /* '['  */
  YYSYMBOL_65_ = 65,                       /* ']'  */
  YYSYMBOL_66_ = 66,                       /* '.'  */
  YYSYMBOL_67_ = 67,                       /* ','  */
  YYSYMBOL_68_ = 68,                       /* '&'  */
  YYSYMBOL_69_ = 69,                       /* '*'  */
  YYSYMBOL_70_ = 70,                       /* '+'  */
  YYSYMBOL_71_ = 71,                       /* '-'  */
  YYSYMBOL_72_ = 72,                       /* '~'  */
  YYSYMBOL_73_ = 73,                       /* '!'  */
  YYSYMBOL_74_ = 74,                       /* '/'  */
  YYSYMBOL_75_ = 75,                       /* '%'  */
  YYSYMBOL_76_ = 76,                       /* '<'  */
  YYSYMBOL_77_ = 77,                       /* '>'  */
  YYSYMBOL_78_ = 78,                       /* '^'  */
  YYSYMBOL_79_ = 79,                       /* '|'  */
  YYSYMBOL_80_ = 80,                       /* '?'  */
  YYSYMBOL_81_ = 81,                       /* ':'  */
  YYSYMBOL_82_ = 82,                       /* '='  */
  YYSYMBOL_83_ = 83,                       /* ';'  */
  YYSYMBOL_84_ = 84,                       /* '{'  */
  YYSYMBOL_85_ = 85,                       /* '}'  */
  YYSYMBOL_YYACCEPT = 86,                  /* $accept  */
  YYSYMBOL_primary_expression = 87,        /* primary_expression  */
  YYSYMBOL_postfix_expression = 88,        /* postfix_expression  */
  YYSYMBOL_argument_expression_list = 89,  /* argument_expression_list  */
  YYSYMBOL_unary_expression = 90,          /* unary_expression  */
  YYSYMBOL_unary_operator = 91,            /* unary_operator  */
  YYSYMBOL_cast_expression = 92,           /* cast_expression  */
  YYSYMBOL_multiplicative_expression = 93, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 94,       /* additive_expression  */
  YYSYMBOL_shift_expression = 95,          /* shift_expression  */
  YYSYMBOL_relational_expression = 96,     /* relational_expression  */
  YYSYMBOL_equality_expression = 97,       /* equality_expression  */
  YYSYMBOL_and_expression = 98,            /* and_expression  */
  YYSYMBOL_exclusive_or_expression = 99,   /* exclusive_or_expression  */
  YYSYMBOL_inclusive_or_expression = 100,  /* inclusive_or_expression  */
  YYSYMBOL_logical_and_expression = 101,   /* logical_and_expression  */
  YYSYMBOL_logical_or_expression = 102,    /* logical_or_expression  */
  YYSYMBOL_conditional_expression = 103,   /* conditional_expression  */
  YYSYMBOL_assignment_expression = 104,    /* assignment_expression  */
  YYSYMBOL_assignment_operator = 105,      /* assignment_operator  */
  YYSYMBOL_expression = 106,               /* expression  */
  YYSYMBOL_constant_expression = 107,      /* constant_expression  */
  YYSYMBOL_declaration = 108,              /* declaration  */
  YYSYMBOL_declaration_specifiers = 109,   /* declaration_specifiers  */
  YYSYMBOL_init_declarator_list = 110,     /* init_declarator_list  */
  YYSYMBOL_init_declarator = 111,          /* init_declarator  */
  YYSYMBOL_storage_class_specifier = 112,  /* storage_class_specifier  */
  YYSYMBOL_type_specifier = 113,           /* type_specifier  */
  YYSYMBOL_struct_or_union_specifier = 114, /* struct_or_union_specifier  */
  YYSYMBOL_struct_or_union = 115,          /* struct_or_union  */
  YYSYMBOL_struct_declaration_list = 116,  /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 117,       /* struct_declaration  */
  YYSYMBOL_specifier_qualifier_list = 118, /* specifier_qualifier_list  */
  YYSYMBOL_struct_declarator_list = 119,   /* struct_declarator_list  */
  YYSYMBOL_struct_declarator = 120,        /* struct_declarator  */
  YYSYMBOL_enum_specifier = 121,           /* enum_specifier  */
  YYSYMBOL_enumerator_list = 122,          /* enumerator_list  */
  YYSYMBOL_enumerator = 123,               /* enumerator  */
  YYSYMBOL_type_qualifier = 124,           /* type_qualifier  */
  YYSYMBOL_declarator = 125,               /* declarator  */
  YYSYMBOL_direct_declarator = 126,        /* direct_declarator  */
  YYSYMBOL_pointer = 127,                  /* pointer  */
  YYSYMBOL_type_qualifier_list = 128,      /* type_qualifier_list  */
  YYSYMBOL_parameter_type_list = 129,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 130,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 131,    /* parameter_declaration  */
  YYSYMBOL_type_name = 132,                /* type_name  */
  YYSYMBOL_abstract_declarator = 133,      /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 134, /* direct_abstract_declarator  */
  YYSYMBOL_initializer = 135,              /* initializer  */
  YYSYMBOL_initializer_list = 136,         /* initializer_list  */
  YYSYMBOL_statement = 137,                /* statement  */
  YYSYMBOL_labeled_statement = 138,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 139,       /* compound_statement  */
  YYSYMBOL_declaration_list = 140,         /* declaration_list  */
  YYSYMBOL_statement_list = 141,           /* statement_list  */
  YYSYMBOL_expression_statement = 142,     /* expression_statement  */
  YYSYMBOL_selection_statement = 143,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 144,      /* iteration_statement  */
  YYSYMBOL_jump_statement = 145,           /* jump_statement  */
  YYSYMBOL_translation_unit = 146,         /* translation_unit  */
  YYSYMBOL_external_declaration = 147,     /* external_declaration  */
  YYSYMBOL_function_definition = 148,      /* function_definition  */
  YYSYMBOL_program = 149                   /* program  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  56
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1147

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  86
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  64
/* YYNRULES -- Number of rules.  */
#define YYNRULES  209
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  340

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   316


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    73,     2,     2,     2,    75,    68,     2,
      62,    63,    69,    70,    67,    71,    66,    74,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    81,    83,
      76,    82,    77,    80,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    64,     2,    65,    78,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    84,    79,    85,    72,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    67,    67,    68,    69,    70,    71,    75,    76,    77,
      78,    79,    80,    81,    82,    86,    87,    90,    91,    92,
      93,    94,    95,    99,   100,   101,   102,   103,   104,   108,
     109,   113,   114,   115,   116,   120,   121,   122,   126,   127,
     128,   132,   133,   134,   135,   136,   140,   141,   142,   146,
     147,   152,   153,   157,   158,   162,   163,   167,   168,   172,
     173,   177,   178,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   196,   197,   201,   205,   206,   210,
     211,   212,   213,   214,   215,   219,   220,   224,   225,   229,
     230,   231,   232,   233,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   254,   255,   256,   260,
     261,   265,   266,   270,   274,   275,   276,   277,   281,   282,
     286,   287,   288,   292,   293,   294,   298,   299,   303,   304,
     308,   309,   313,   317,   318,   319,   320,   324,   325,   326,
     327,   331,   332,   337,   338,   342,   343,   347,   348,   349,
     350,   359,   360,   364,   365,   366,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   382,   383,   384,   388,   389,
     393,   394,   395,   396,   397,   398,   402,   403,   404,   408,
     409,   410,   411,   415,   416,   420,   421,   425,   426,   430,
     431,   432,   436,   437,   438,   439,   443,   444,   445,   446,
     447,   451,   452,   456,   457,   461,   462,   463,   464,   469
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IDENTIFIER", "NUMBER",
  "FLOAT_NUMBER", "STRING_LITERAL", "SIZEOF", "PTR_OP", "INC_OP", "DEC_OP",
  "LEFT_OP", "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "AND_OP",
  "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN",
  "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN",
  "OR_ASSIGN", "TYPE_NAME", "TYPEDEF", "EXTERN", "STATIC", "AUTO",
  "REGISTER", "CHAR", "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED",
  "FLOAT", "DOUBLE", "CONST", "VOLATILE", "VOID", "STRUCT", "UNION",
  "ENUM", "ELLIPSIS", "CASE", "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE",
  "DO", "FOR", "GOTO", "CONTINUE", "BREAK", "RETURN", "'('", "')'", "'['",
  "']'", "'.'", "','", "'&'", "'*'", "'+'", "'-'", "'~'", "'!'", "'/'",
  "'%'", "'<'", "'>'", "'^'", "'|'", "'?'", "':'", "'='", "';'", "'{'",
  "'}'", "$accept", "primary_expression", "postfix_expression",
  "argument_expression_list", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "struct_or_union_specifier",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "type_qualifier", "declarator", "direct_declarator", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "type_name", "abstract_declarator",
  "direct_abstract_declarator", "initializer", "initializer_list",
  "statement", "labeled_statement", "compound_statement",
  "declaration_list", "statement_list", "expression_statement",
  "selection_statement", "iteration_statement", "jump_statement",
  "translation_unit", "external_declaration", "function_definition",
  "program", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-215)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     840,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,
    -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,
    -215,    14,     8,  -215,    42,  1099,  1099,  -215,    28,  -215,
    1099,   944,   -42,   840,  -215,  -215,    56,    -4,    82,    50,
    -215,    32,  -215,   888,  -215,  -215,    11,   919,  -215,   271,
    -215,    42,  -215,   944,  1008,  -215,  -215,    82,    51,   -38,
    -215,  -215,     8,  -215,    87,  -215,   944,   919,   919,   395,
    -215,    49,   919,    43,  -215,  -215,  -215,   712,   724,   724,
     795,    46,    77,   105,   112,   485,   151,   142,   160,   171,
     520,   605,  -215,  -215,  -215,  -215,  -215,  -215,  -215,  -215,
    -215,   229,   339,   795,  -215,   101,    83,   168,    44,   186,
     195,   153,   185,   248,    -8,  -215,  -215,    65,  -215,  -215,
    -215,   342,   413,  -215,  -215,  -215,  -215,   184,  -215,  -215,
    -215,    78,   204,   215,  -215,   -32,   795,    82,  -215,  -215,
    -215,    87,  -215,  -215,  -215,   868,  -215,  -215,  -215,   795,
      67,  -215,   202,  -215,   485,   605,  -215,   795,  -215,  -215,
    -215,  -215,   205,   485,   795,   795,   795,   232,   556,   206,
    -215,  -215,  -215,   133,   -26,   104,   225,   287,  -215,  -215,
     592,   795,   291,  -215,  -215,  -215,  -215,  -215,  -215,  -215,
    -215,  -215,  -215,  -215,   795,  -215,   795,   795,   795,   795,
     795,   795,   795,   795,   795,   795,   795,   795,   795,   795,
     795,   795,   795,   795,   795,   795,  -215,  -215,   449,  -215,
    -215,   784,   676,   100,  -215,   150,  -215,   180,  -215,  1078,
    -215,  -215,  -215,  -215,    38,  -215,  -215,    49,  -215,   795,
    -215,   233,   485,  -215,     4,    39,   114,   236,   556,  -215,
    -215,  -215,   967,  -215,   795,  -215,  -215,   148,  -215,   190,
    -215,  -215,  -215,  -215,  -215,   101,   101,    83,    83,   168,
     168,   168,   168,    44,    44,   186,   195,   153,   185,   248,
      -6,  -215,  -215,  -215,   257,   261,  -215,   234,  -215,  -215,
     100,   180,  1043,   688,  -215,  -215,   200,  -215,  -215,  -215,
    -215,  -215,   485,   485,   485,   795,   700,  -215,  -215,   795,
    -215,   795,  -215,  -215,  -215,  -215,  -215,  -215,   272,  -215,
     269,  -215,  -215,   283,  -215,  -215,   163,   485,   169,  -215,
    -215,  -215,  -215,   485,   254,  -215,   485,  -215,  -215,  -215
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   133,   105,    89,    90,    91,    92,    93,    95,    96,
      97,    98,   101,   102,    99,   100,   130,   131,    94,   109,
     110,     0,     0,   204,     0,    79,    81,   103,     0,   104,
      83,     0,   132,   209,   201,   203,     0,   125,     0,     0,
      77,     0,    85,    87,    80,    82,   108,     0,    84,     0,
     183,     0,   208,     0,   147,   202,     1,     0,   128,     0,
     126,   134,     0,    78,     0,   206,     0,     0,   115,     0,
     111,     0,   117,     2,     3,     4,     5,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    23,    24,    25,    26,    27,    28,   187,   179,
       7,    17,    29,     0,    31,    35,    38,    41,    46,    49,
      51,    53,    55,    57,    59,    61,    74,     0,   185,   170,
     171,     0,     0,   172,   173,   174,   175,    87,   184,   207,
     135,   150,     0,   143,   145,     0,     0,     0,   123,    86,
       2,     0,   165,    88,   205,     0,   114,   107,   112,     0,
       0,   118,   120,   116,     0,     0,    21,     0,    18,    19,
      29,    76,     0,     0,     0,     0,     0,     0,     0,     0,
     197,   198,   199,     0,     0,   151,     0,     0,    13,    14,
       0,     0,     0,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    63,     0,    20,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   188,   181,     0,   180,
     186,   147,     0,   137,   148,   153,   149,   154,   136,   147,
     124,   129,   127,   168,     0,   106,   121,     0,   113,     0,
     176,     0,     0,   178,     0,     0,     0,     0,     0,   196,
     200,     6,   147,   152,     0,    12,     9,     0,    15,     0,
      11,    62,    32,    33,    34,    36,    37,    39,    40,    44,
      45,    42,    43,    47,    48,    50,    52,    54,    56,    58,
       0,    75,   182,   161,     0,     0,   157,     0,   141,   139,
     138,   155,   147,     0,   144,   146,     0,   166,   119,   122,
      22,   177,     0,     0,     0,     0,     0,    30,    10,     0,
       8,     0,   162,   156,   158,   142,   140,   163,     0,   159,
       0,   167,   169,   189,   191,   192,     0,     0,     0,    16,
      60,   164,   160,     0,     0,   194,     0,   190,   193,   195
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -215,  -215,  -215,  -215,   -14,  -215,   -89,    20,    57,    45,
      53,   129,   140,   146,   141,   155,  -215,   -76,   -63,  -215,
     -78,  -121,    16,     0,  -215,   307,  -215,   -29,  -215,  -215,
     303,   -61,   -36,  -215,   154,  -215,   338,   268,   -45,    -3,
    -215,  -214,  -215,   -51,  -215,   177,   252,  -124,   183,  -135,
    -215,   -80,  -215,    98,     1,   288,  -134,  -215,  -215,  -215,
    -215,   396,  -215,  -215
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,   100,   101,   257,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   194,
     117,   162,    50,    51,    41,    42,    25,    26,    27,    28,
      69,    70,    71,   150,   151,    29,    59,    60,    30,    31,
      32,   225,   290,   284,   133,   134,   176,   285,   227,   143,
     234,   118,   119,   120,    53,   122,   123,   124,   125,   126,
      33,    34,    35,    36
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      24,   142,    72,   132,   161,   167,   233,   226,   148,   289,
     213,     1,   173,   174,   195,   231,    23,    37,    68,    39,
      54,    43,    72,    72,    72,    44,    45,    72,   236,   137,
      48,    46,   146,    24,   248,   137,   153,   251,    68,    68,
      68,   215,   220,    68,    66,     1,    72,   138,   127,    23,
     121,   253,     1,   230,   131,   175,    56,   203,   204,   127,
     161,   215,    68,   156,   158,   159,   160,   302,   152,   128,
      22,   215,   214,   161,   240,   311,   316,   174,   142,   174,
      57,     1,   128,   243,   148,    58,   244,   245,   246,   160,
     140,    74,    75,    76,    77,    67,    78,    79,    38,    62,
      72,   287,   303,   259,    22,   296,   215,   262,   263,   264,
      72,    22,    47,    61,   306,    63,    68,   258,   299,   175,
     205,   206,   160,   297,   154,    40,    68,   163,   224,    52,
     149,   261,   215,   136,   237,   160,   280,   128,   220,   164,
     221,    65,   222,    16,    17,   169,   161,   223,   216,    91,
     238,   129,   281,   199,   200,    92,    93,    94,    95,    96,
      97,   322,   301,   161,   144,   307,   252,   165,   222,   223,
     196,   141,   320,   223,   166,   197,   198,   304,   288,   201,
     202,   215,   160,   160,   160,   160,   160,   160,   160,   160,
     160,   160,   160,   160,   160,   160,   160,   160,   160,   160,
     215,   207,   208,   140,    74,    75,    76,    77,   160,    78,
      79,   308,   252,   168,   222,   309,   250,   161,    39,   265,
     266,   131,   323,   324,   325,   160,   334,   326,   328,   131,
     215,   210,   336,   142,   152,   330,   215,   177,   178,   179,
     160,   318,   292,   170,   293,   315,   329,   335,   269,   270,
     271,   272,   131,   337,   171,   310,   339,   215,   267,   268,
     273,   274,    91,   209,   211,   212,    64,   228,    92,    93,
      94,    95,    96,    97,    73,    74,    75,    76,    77,   160,
      78,    79,   229,   239,   141,   321,   242,   247,   254,   249,
     255,   180,   131,   181,   260,   182,   300,   160,   305,   314,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
     312,    80,    81,    82,   313,    83,    84,    85,    86,    87,
      88,    89,    90,    91,   332,   331,   333,   338,   275,    92,
      93,    94,    95,    96,    97,    73,    74,    75,    76,    77,
     276,    78,    79,   278,    98,    49,    99,   277,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   279,   139,
     145,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,   298,    80,    81,    82,   135,    83,    84,    85,    86,
      87,    88,    89,    90,    91,   232,   295,   241,   291,   218,
      92,    93,    94,    95,    96,    97,    73,    74,    75,    76,
      77,   193,    78,    79,     2,    98,    49,   217,     0,    55,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     0,     0,     0,     0,     0,     0,
       0,     0,    73,    74,    75,    76,    77,     0,    78,    79,
       0,     0,     0,    80,    81,    82,     0,    83,    84,    85,
      86,    87,    88,    89,    90,    91,     0,     0,     0,     0,
     147,    92,    93,    94,    95,    96,    97,     0,    73,    74,
      75,    76,    77,     0,    78,    79,    98,    49,   219,    80,
      81,    82,     0,    83,    84,    85,    86,    87,    88,    89,
      90,    91,     0,     0,     0,     0,     0,    92,    93,    94,
      95,    96,    97,   140,    74,    75,    76,    77,     0,    78,
      79,     0,    98,    49,   282,    80,    81,    82,     0,    83,
      84,    85,    86,    87,    88,    89,    90,    91,     0,     0,
       0,     0,     0,    92,    93,    94,    95,    96,    97,   140,
      74,    75,    76,    77,     0,    78,    79,     0,    98,    49,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    91,     0,     0,     0,     0,     0,    92,    93,
      94,    95,    96,    97,     0,   140,    74,    75,    76,    77,
       0,    78,    79,   172,     0,     0,     0,     0,   140,    74,
      75,    76,    77,     0,    78,    79,     0,     0,    91,     0,
       0,     0,     0,     0,    92,    93,    94,    95,    96,    97,
       0,     0,     0,     0,     2,     0,     0,     0,     0,    98,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    91,   256,     0,     0,     0,     0,
      92,    93,    94,    95,    96,    97,     0,    91,     0,     0,
       0,     0,     0,    92,    93,    94,    95,    96,    97,   140,
      74,    75,    76,    77,     0,    78,    79,     0,     0,     0,
       0,   140,    74,    75,    76,    77,     0,    78,    79,     0,
       0,     0,     0,   140,    74,    75,    76,    77,     0,    78,
      79,     0,     0,     0,     0,   140,    74,    75,    76,    77,
       0,    78,    79,     0,     0,     0,     0,   140,    74,    75,
      76,    77,     0,    78,    79,     0,     0,     0,    91,     0,
       0,   286,     0,     0,    92,    93,    94,    95,    96,    97,
      91,     0,     0,   319,     0,     0,    92,    93,    94,    95,
      96,    97,    91,   327,     0,     0,     0,     0,    92,    93,
      94,    95,    96,    97,   155,     0,     0,     0,     0,     0,
      92,    93,    94,    95,    96,    97,   157,     1,     0,     0,
       0,     0,    92,    93,    94,    95,    96,    97,   140,    74,
      75,    76,    77,     0,    78,    79,     0,     0,     0,     0,
       0,     0,     0,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     1,     0,     0,   221,   283,   222,     0,
       0,     0,     0,   223,     0,     0,     0,    91,     0,     0,
       0,     0,     0,    92,    93,    94,    95,    96,    97,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,     0,
       0,     0,     0,     0,     0,     0,     0,     2,     0,     0,
       0,     0,    22,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     2,     0,
       0,     0,     0,   235,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     0,     0,
      64,     0,    49,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     0,     0,     0,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    49,   252,
     283,   222,     0,     0,     0,     0,   223,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   130,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   317,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,   294,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21
};

static const yytype_int16 yycheck[] =
{
       0,    64,    47,    54,    80,    85,   141,   131,    69,   223,
      18,     3,    90,    91,   103,   136,     0,     3,    47,    22,
      62,    24,    67,    68,    69,    25,    26,    72,   149,    67,
      30,     3,    68,    33,   168,    67,    72,    63,    67,    68,
      69,    67,   122,    72,    43,     3,    91,    85,    51,    33,
      49,   175,     3,    85,    54,    91,     0,    13,    14,    62,
     136,    67,    91,    77,    78,    79,    80,    63,    71,    53,
      62,    67,    80,   149,   154,    81,   290,   155,   141,   157,
      84,     3,    66,   163,   145,     3,   164,   165,   166,   103,
       3,     4,     5,     6,     7,    84,     9,    10,    84,    67,
     145,   222,    63,   181,    62,    67,    67,   196,   197,   198,
     155,    62,    84,    63,   248,    83,   145,   180,   239,   155,
      76,    77,   136,    85,    81,    83,   155,    81,   131,    31,
      81,   194,    67,    82,    67,   149,   214,   121,   218,    62,
      62,    43,    64,    43,    44,     3,   222,    69,    83,    62,
      83,    53,   215,    70,    71,    68,    69,    70,    71,    72,
      73,   296,   242,   239,    66,   254,    62,    62,    64,    69,
      69,    84,   293,    69,    62,    74,    75,    63,   223,    11,
      12,    67,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
      67,    15,    16,     3,     4,     5,     6,     7,   222,     9,
      10,    63,    62,    62,    64,    67,    83,   293,   221,   199,
     200,   221,   302,   303,   304,   239,    63,   305,   306,   229,
      67,    78,    63,   296,   237,   311,    67,     8,     9,    10,
     254,   292,    62,    83,    64,   290,   309,   327,   203,   204,
     205,   206,   252,   333,    83,    65,   336,    67,   201,   202,
     207,   208,    62,    68,    79,    17,    82,    63,    68,    69,
      70,    71,    72,    73,     3,     4,     5,     6,     7,   293,
       9,    10,    67,    81,    84,    85,    81,    55,    63,    83,
       3,    62,   292,    64,     3,    66,    63,   311,    62,    65,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      63,    50,    51,    52,    63,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    65,    63,    53,    83,   209,    68,
      69,    70,    71,    72,    73,     3,     4,     5,     6,     7,
     210,     9,    10,   212,    83,    84,    85,   211,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,   213,    62,
      67,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,   237,    50,    51,    52,    57,    54,    55,    56,    57,
      58,    59,    60,    61,    62,   137,   229,   155,   225,   121,
      68,    69,    70,    71,    72,    73,     3,     4,     5,     6,
       7,    82,     9,    10,    29,    83,    84,    85,    -1,    33,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,    -1,     9,    10,
      -1,    -1,    -1,    50,    51,    52,    -1,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    -1,    -1,    -1,    -1,
      85,    68,    69,    70,    71,    72,    73,    -1,     3,     4,
       5,     6,     7,    -1,     9,    10,    83,    84,    85,    50,
      51,    52,    -1,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    -1,    -1,    -1,    -1,    -1,    68,    69,    70,
      71,    72,    73,     3,     4,     5,     6,     7,    -1,     9,
      10,    -1,    83,    84,    85,    50,    51,    52,    -1,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    -1,    -1,
      -1,    -1,    -1,    68,    69,    70,    71,    72,    73,     3,
       4,     5,     6,     7,    -1,     9,    10,    -1,    83,    84,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,    68,    69,
      70,    71,    72,    73,    -1,     3,     4,     5,     6,     7,
      -1,     9,    10,    83,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,    -1,     9,    10,    -1,    -1,    62,    -1,
      -1,    -1,    -1,    -1,    68,    69,    70,    71,    72,    73,
      -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,    83,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    62,    63,    -1,    -1,    -1,    -1,
      68,    69,    70,    71,    72,    73,    -1,    62,    -1,    -1,
      -1,    -1,    -1,    68,    69,    70,    71,    72,    73,     3,
       4,     5,     6,     7,    -1,     9,    10,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,    -1,     9,    10,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,    -1,     9,
      10,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
      -1,     9,    10,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,    -1,     9,    10,    -1,    -1,    -1,    62,    -1,
      -1,    65,    -1,    -1,    68,    69,    70,    71,    72,    73,
      62,    -1,    -1,    65,    -1,    -1,    68,    69,    70,    71,
      72,    73,    62,    63,    -1,    -1,    -1,    -1,    68,    69,
      70,    71,    72,    73,    62,    -1,    -1,    -1,    -1,    -1,
      68,    69,    70,    71,    72,    73,    62,     3,    -1,    -1,
      -1,    -1,    68,    69,    70,    71,    72,    73,     3,     4,
       5,     6,     7,    -1,     9,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,    -1,    -1,    62,    63,    64,    -1,
      -1,    -1,    -1,    69,    -1,    -1,    -1,    62,    -1,    -1,
      -1,    -1,    -1,    68,    69,    70,    71,    72,    73,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    -1,
      -1,    -1,    62,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,
      -1,    -1,    -1,    85,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    -1,    -1,
      82,    -1,    84,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    -1,    -1,    -1,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    62,
      63,    64,    -1,    -1,    -1,    -1,    69,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    62,   108,   109,   112,   113,   114,   115,   121,
     124,   125,   126,   146,   147,   148,   149,     3,    84,   125,
      83,   110,   111,   125,   109,   109,     3,    84,   109,    84,
     108,   109,   139,   140,    62,   147,     0,    84,     3,   122,
     123,    63,    67,    83,    82,   139,   140,    84,   113,   116,
     117,   118,   124,     3,     4,     5,     6,     7,     9,    10,
      50,    51,    52,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    68,    69,    70,    71,    72,    73,    83,    85,
      87,    88,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   106,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   125,   108,   139,
      63,   109,   129,   130,   131,   122,    82,    67,    85,   111,
       3,    84,   104,   135,   139,   116,   118,    85,   117,    81,
     119,   120,   125,   118,    81,    62,    90,    62,    90,    90,
      90,   103,   107,    81,    62,    62,    62,   137,    62,     3,
      83,    83,    83,   106,   106,   118,   132,     8,     9,    10,
      62,    64,    66,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    82,   105,    92,    69,    74,    75,    70,
      71,    11,    12,    13,    14,    76,    77,    15,    16,    68,
      78,    79,    17,    18,    80,    67,    83,    85,   141,    85,
     137,    62,    64,    69,   125,   127,   133,   134,    63,    67,
      85,   107,   123,   135,   136,    85,   107,    67,    83,    81,
     137,   132,    81,   137,   106,   106,   106,    55,   142,    83,
      83,    63,    62,   133,    63,     3,    63,    89,   104,   106,
       3,   104,    92,    92,    92,    93,    93,    94,    94,    95,
      95,    95,    95,    96,    96,    97,    98,    99,   100,   101,
     106,   104,    85,    63,   129,   133,    65,   107,   124,   127,
     128,   134,    62,    64,    49,   131,    67,    85,   120,   107,
      63,   137,    63,    63,    63,    62,   142,    92,    63,    67,
      65,    81,    63,    63,    65,   124,   127,    63,   129,    65,
     107,    85,   135,   137,   137,   137,   106,    63,   106,   104,
     103,    63,    65,    53,    63,   137,    63,   137,    83,   137
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    86,    87,    87,    87,    87,    87,    88,    88,    88,
      88,    88,    88,    88,    88,    89,    89,    90,    90,    90,
      90,    90,    90,    91,    91,    91,    91,    91,    91,    92,
      92,    93,    93,    93,    93,    94,    94,    94,    95,    95,
      95,    96,    96,    96,    96,    96,    97,    97,    97,    98,
      98,    99,    99,   100,   100,   101,   101,   102,   102,   103,
     103,   104,   104,   105,   105,   105,   105,   105,   105,   105,
     105,   105,   105,   105,   106,   106,   107,   108,   108,   109,
     109,   109,   109,   109,   109,   110,   110,   111,   111,   112,
     112,   112,   112,   112,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   114,   114,   114,   115,
     115,   116,   116,   117,   118,   118,   118,   118,   119,   119,
     120,   120,   120,   121,   121,   121,   122,   122,   123,   123,
     124,   124,   125,   126,   126,   126,   126,   127,   127,   127,
     127,   128,   128,   129,   129,   130,   130,   131,   131,   131,
     131,   132,   132,   133,   133,   133,   134,   134,   134,   134,
     134,   134,   134,   134,   134,   135,   135,   135,   136,   136,
     137,   137,   137,   137,   137,   137,   138,   138,   138,   139,
     139,   139,   139,   140,   140,   141,   141,   142,   142,   143,
     143,   143,   144,   144,   144,   144,   145,   145,   145,   145,
     145,   146,   146,   147,   147,   148,   148,   148,   148,   149
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     3,     1,     4,     3,
       4,     3,     3,     2,     2,     1,     3,     1,     2,     2,
       2,     2,     4,     1,     1,     1,     1,     1,     1,     1,
       4,     1,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       5,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     2,     3,     1,
       2,     1,     2,     1,     2,     1,     3,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     5,     4,     2,     1,
       1,     1,     2,     3,     2,     1,     2,     1,     1,     3,
       1,     2,     3,     4,     5,     2,     1,     3,     1,     3,
       1,     1,     1,     1,     3,     3,     4,     1,     2,     2,
       3,     1,     2,     1,     3,     1,     3,     0,     2,     2,
       1,     1,     2,     1,     1,     2,     3,     2,     3,     3,
       4,     2,     3,     3,     4,     1,     3,     4,     1,     3,
       1,     1,     1,     1,     1,     1,     3,     4,     3,     2,
       3,     3,     4,     1,     2,     1,     2,     1,     2,     5,
       7,     5,     5,     7,     6,     7,     3,     2,     2,     2,
       3,     1,     2,     1,     1,     4,     3,     3,     2,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* primary_expression: IDENTIFIER  */
#line 67 "src/parser.y"
                                                { (yyval.node) = new Identifier( *(yyvsp[0].string) ); }
#line 1628 "src/parser.tab.cpp"
    break;

  case 3: /* primary_expression: NUMBER  */
#line 68 "src/parser.y"
                                                        { (yyval.node) = new Number((yyvsp[0].number)); }
#line 1634 "src/parser.tab.cpp"
    break;

  case 7: /* postfix_expression: primary_expression  */
#line 75 "src/parser.y"
                             { (yyval.node) = (yyvsp[0].node); }
#line 1640 "src/parser.tab.cpp"
    break;

  case 9: /* postfix_expression: postfix_expression '(' ')'  */
#line 77 "src/parser.y"
                                                                                  { (yyval.node) = new FunctionCall((yyvsp[-2].node), new DoNothing() ); }
#line 1646 "src/parser.tab.cpp"
    break;

  case 10: /* postfix_expression: postfix_expression '(' argument_expression_list ')'  */
#line 78 "src/parser.y"
                                                              { (yyval.node) = new FunctionCall((yyvsp[-3].node), (yyvsp[-1].node)); }
#line 1652 "src/parser.tab.cpp"
    break;

  case 16: /* argument_expression_list: argument_expression_list ',' assignment_expression  */
#line 87 "src/parser.y"
                                                              { (yyval.node) = new ArgumentList((yyvsp[0].node), (yyvsp[-2].node)); 	}
#line 1658 "src/parser.tab.cpp"
    break;

  case 17: /* unary_expression: postfix_expression  */
#line 90 "src/parser.y"
                             { (yyval.node) = (yyvsp[0].node); }
#line 1664 "src/parser.tab.cpp"
    break;

  case 29: /* cast_expression: unary_expression  */
#line 108 "src/parser.y"
                           { (yyval.node) = (yyvsp[0].node); }
#line 1670 "src/parser.tab.cpp"
    break;

  case 31: /* multiplicative_expression: cast_expression  */
#line 113 "src/parser.y"
                          { (yyval.node) = (yyvsp[0].node); }
#line 1676 "src/parser.tab.cpp"
    break;

  case 32: /* multiplicative_expression: multiplicative_expression '*' cast_expression  */
#line 114 "src/parser.y"
                                                        { (yyval.node) = new MulExpression((yyvsp[-2].node), (yyvsp[0].node)); }
#line 1682 "src/parser.tab.cpp"
    break;

  case 33: /* multiplicative_expression: multiplicative_expression '/' cast_expression  */
#line 115 "src/parser.y"
                                                         { (yyval.node) = new DivExpression((yyvsp[-2].node), (yyvsp[0].node)); }
#line 1688 "src/parser.tab.cpp"
    break;

  case 35: /* additive_expression: multiplicative_expression  */
#line 120 "src/parser.y"
                                    { (yyval.node) = (yyvsp[0].node); }
#line 1694 "src/parser.tab.cpp"
    break;

  case 36: /* additive_expression: additive_expression '+' multiplicative_expression  */
#line 121 "src/parser.y"
                                                            { (yyval.node) = new AddExpression((yyvsp[-2].node), (yyvsp[0].node)); }
#line 1700 "src/parser.tab.cpp"
    break;

  case 37: /* additive_expression: additive_expression '-' multiplicative_expression  */
#line 122 "src/parser.y"
                                                            { (yyval.node) = new SubExpression((yyvsp[-2].node), (yyvsp[0].node)); }
#line 1706 "src/parser.tab.cpp"
    break;

  case 38: /* shift_expression: additive_expression  */
#line 126 "src/parser.y"
                              { (yyval.node) = (yyvsp[0].node); }
#line 1712 "src/parser.tab.cpp"
    break;

  case 41: /* relational_expression: shift_expression  */
#line 132 "src/parser.y"
                           { (yyval.node) = (yyvsp[0].node); }
#line 1718 "src/parser.tab.cpp"
    break;

  case 42: /* relational_expression: relational_expression '<' shift_expression  */
#line 133 "src/parser.y"
                                                        {(yyval.node) = new LessThan((yyvsp[-2].node), (yyvsp[0].node)); }
#line 1724 "src/parser.tab.cpp"
    break;

  case 43: /* relational_expression: relational_expression '>' shift_expression  */
#line 134 "src/parser.y"
                                                        { (yyval.node) = new GreaterThan((yyvsp[-2].node), (yyvsp[0].node)); }
#line 1730 "src/parser.tab.cpp"
    break;

  case 44: /* relational_expression: relational_expression LE_OP shift_expression  */
#line 135 "src/parser.y"
                                                        { (yyval.node) = new LessThanEQ((yyvsp[-2].node), (yyvsp[0].node)); }
#line 1736 "src/parser.tab.cpp"
    break;

  case 45: /* relational_expression: relational_expression GE_OP shift_expression  */
#line 136 "src/parser.y"
                                                        { (yyval.node) = new GreaterThanEQ((yyvsp[-2].node), (yyvsp[0].node)); }
#line 1742 "src/parser.tab.cpp"
    break;

  case 46: /* equality_expression: relational_expression  */
#line 140 "src/parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 1748 "src/parser.tab.cpp"
    break;

  case 47: /* equality_expression: equality_expression EQ_OP relational_expression  */
#line 141 "src/parser.y"
                                                          { (yyval.node) = new EqualComp((yyvsp[-2].node), (yyvsp[0].node)); }
#line 1754 "src/parser.tab.cpp"
    break;

  case 48: /* equality_expression: equality_expression NE_OP relational_expression  */
#line 142 "src/parser.y"
                                                          {(yyval.node) = new NEqualComp((yyvsp[-2].node), (yyvsp[0].node)); }
#line 1760 "src/parser.tab.cpp"
    break;

  case 49: /* and_expression: equality_expression  */
#line 146 "src/parser.y"
                              { (yyval.node) = (yyvsp[0].node); }
#line 1766 "src/parser.tab.cpp"
    break;

  case 50: /* and_expression: and_expression '&' equality_expression  */
#line 147 "src/parser.y"
                                                 { (yyval.node) = new AndExpression((yyvsp[-2].node), (yyvsp[0].node)); }
#line 1772 "src/parser.tab.cpp"
    break;

  case 51: /* exclusive_or_expression: and_expression  */
#line 152 "src/parser.y"
                         { (yyval.node) = (yyvsp[0].node); }
#line 1778 "src/parser.tab.cpp"
    break;

  case 52: /* exclusive_or_expression: exclusive_or_expression '^' and_expression  */
#line 153 "src/parser.y"
                                                     {(yyval.node) = new XorExpression((yyvsp[-2].node), (yyvsp[0].node)); }
#line 1784 "src/parser.tab.cpp"
    break;

  case 53: /* inclusive_or_expression: exclusive_or_expression  */
#line 157 "src/parser.y"
                                  { (yyval.node) = (yyvsp[0].node); }
#line 1790 "src/parser.tab.cpp"
    break;

  case 54: /* inclusive_or_expression: inclusive_or_expression '|' exclusive_or_expression  */
#line 158 "src/parser.y"
                                                              {(yyval.node) = new OrExpression((yyvsp[-2].node), (yyvsp[0].node)); }
#line 1796 "src/parser.tab.cpp"
    break;

  case 55: /* logical_and_expression: inclusive_or_expression  */
#line 162 "src/parser.y"
                                  { (yyval.node) = (yyvsp[0].node); }
#line 1802 "src/parser.tab.cpp"
    break;

  case 56: /* logical_and_expression: logical_and_expression AND_OP inclusive_or_expression  */
#line 163 "src/parser.y"
                                                                {(yyval.node) = new LogicalAndExpression((yyvsp[-2].node), (yyvsp[0].node)); }
#line 1808 "src/parser.tab.cpp"
    break;

  case 57: /* logical_or_expression: logical_and_expression  */
#line 167 "src/parser.y"
                                 { (yyval.node) = (yyvsp[0].node); }
#line 1814 "src/parser.tab.cpp"
    break;

  case 58: /* logical_or_expression: logical_or_expression OR_OP logical_and_expression  */
#line 168 "src/parser.y"
                                                             {(yyval.node) = new LogicalOrExpression((yyvsp[-2].node), (yyvsp[0].node)); }
#line 1820 "src/parser.tab.cpp"
    break;

  case 59: /* conditional_expression: logical_or_expression  */
#line 172 "src/parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 1826 "src/parser.tab.cpp"
    break;

  case 61: /* assignment_expression: conditional_expression  */
#line 177 "src/parser.y"
                                 { (yyval.node) = (yyvsp[0].node); }
#line 1832 "src/parser.tab.cpp"
    break;

  case 62: /* assignment_expression: unary_expression assignment_operator assignment_expression  */
#line 178 "src/parser.y"
                                                                     { (yyval.node) = new Assignment((yyvsp[-2].node), (yyvsp[0].node)); }
#line 1838 "src/parser.tab.cpp"
    break;

  case 74: /* expression: assignment_expression  */
#line 196 "src/parser.y"
                                { (yyval.node) = (yyvsp[0].node); }
#line 1844 "src/parser.tab.cpp"
    break;

  case 77: /* declaration: declaration_specifiers ';'  */
#line 205 "src/parser.y"
                                     { (yyval.node) = (yyvsp[-1].node); }
#line 1850 "src/parser.tab.cpp"
    break;

  case 78: /* declaration: declaration_specifiers init_declarator_list ';'  */
#line 206 "src/parser.y"
                                                          { (yyval.node) = (yyvsp[-1].node); }
#line 1856 "src/parser.tab.cpp"
    break;

  case 81: /* declaration_specifiers: type_specifier  */
#line 212 "src/parser.y"
                         { (yyval.node) = (yyvsp[0].node); }
#line 1862 "src/parser.tab.cpp"
    break;

  case 85: /* init_declarator_list: init_declarator  */
#line 219 "src/parser.y"
                          { (yyval.node) = (yyvsp[0].node); }
#line 1868 "src/parser.tab.cpp"
    break;

  case 87: /* init_declarator: declarator  */
#line 224 "src/parser.y"
                        { (yyval.node) = new Declaration((yyvsp[0].node), new Number(0) ); }
#line 1874 "src/parser.tab.cpp"
    break;

  case 88: /* init_declarator: declarator '=' initializer  */
#line 225 "src/parser.y"
                                     { (yyval.node) = new Declaration((yyvsp[-2].node), (yyvsp[0].node)); }
#line 1880 "src/parser.tab.cpp"
    break;

  case 97: /* type_specifier: INT  */
#line 242 "src/parser.y"
                                {(yyval.node) = new Int(); }
#line 1886 "src/parser.tab.cpp"
    break;

  case 132: /* declarator: direct_declarator  */
#line 313 "src/parser.y"
                            { (yyval.node) = new Declarator((yyvsp[0].node)); }
#line 1892 "src/parser.tab.cpp"
    break;

  case 133: /* direct_declarator: IDENTIFIER  */
#line 317 "src/parser.y"
                     { (yyval.node) = new Identifier( *(yyvsp[0].string) ); }
#line 1898 "src/parser.tab.cpp"
    break;

  case 135: /* direct_declarator: direct_declarator '(' ')'  */
#line 319 "src/parser.y"
                                    { (yyval.node) = (yyvsp[-2].node); }
#line 1904 "src/parser.tab.cpp"
    break;

  case 136: /* direct_declarator: direct_declarator '(' parameter_type_list ')'  */
#line 320 "src/parser.y"
                                                        { (yyval.node) = new FunctionStart((yyvsp[-3].node), (yyvsp[-1].node)); }
#line 1910 "src/parser.tab.cpp"
    break;

  case 143: /* parameter_type_list: parameter_list  */
#line 337 "src/parser.y"
                                                        { (yyval.node) = (yyvsp[0].node); }
#line 1916 "src/parser.tab.cpp"
    break;

  case 145: /* parameter_list: parameter_declaration  */
#line 342 "src/parser.y"
                                                                   { (yyval.node) = new ParameterList((yyvsp[0].node), new DoNothing() ); }
#line 1922 "src/parser.tab.cpp"
    break;

  case 146: /* parameter_list: parameter_list ',' parameter_declaration  */
#line 343 "src/parser.y"
                                                   { (yyval.node) = new ParameterList((yyvsp[0].node), (yyvsp[-2].node)); }
#line 1928 "src/parser.tab.cpp"
    break;

  case 148: /* parameter_declaration: declaration_specifiers declarator  */
#line 348 "src/parser.y"
                                            { (yyval.node) = (yyvsp[0].node); }
#line 1934 "src/parser.tab.cpp"
    break;

  case 154: /* abstract_declarator: direct_abstract_declarator  */
#line 365 "src/parser.y"
                                                { (yyval.node) = (yyvsp[0].node); }
#line 1940 "src/parser.tab.cpp"
    break;

  case 162: /* direct_abstract_declarator: '(' parameter_type_list ')'  */
#line 376 "src/parser.y"
                                                { (yyval.node) = (yyvsp[-1].node); }
#line 1946 "src/parser.tab.cpp"
    break;

  case 165: /* initializer: assignment_expression  */
#line 382 "src/parser.y"
                                {(yyval.node) = (yyvsp[0].node); }
#line 1952 "src/parser.tab.cpp"
    break;

  case 170: /* statement: labeled_statement  */
#line 393 "src/parser.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 1958 "src/parser.tab.cpp"
    break;

  case 171: /* statement: compound_statement  */
#line 394 "src/parser.y"
                             { (yyval.node) = (yyvsp[0].node); }
#line 1964 "src/parser.tab.cpp"
    break;

  case 172: /* statement: expression_statement  */
#line 395 "src/parser.y"
                               { (yyval.node) = (yyvsp[0].node); }
#line 1970 "src/parser.tab.cpp"
    break;

  case 173: /* statement: selection_statement  */
#line 396 "src/parser.y"
                              { (yyval.node) = (yyvsp[0].node); }
#line 1976 "src/parser.tab.cpp"
    break;

  case 174: /* statement: iteration_statement  */
#line 397 "src/parser.y"
                              { (yyval.node) = (yyvsp[0].node); }
#line 1982 "src/parser.tab.cpp"
    break;

  case 175: /* statement: jump_statement  */
#line 398 "src/parser.y"
                         { (yyval.node) = (yyvsp[0].node); }
#line 1988 "src/parser.tab.cpp"
    break;

  case 179: /* compound_statement: '{' '}'  */
#line 408 "src/parser.y"
                  { (yyval.node) = new DoNothing(); }
#line 1994 "src/parser.tab.cpp"
    break;

  case 180: /* compound_statement: '{' statement_list '}'  */
#line 409 "src/parser.y"
                                 { (yyval.node) = (yyvsp[-1].node); }
#line 2000 "src/parser.tab.cpp"
    break;

  case 181: /* compound_statement: '{' declaration_list '}'  */
#line 410 "src/parser.y"
                                   { (yyval.node) = (yyvsp[-1].node); }
#line 2006 "src/parser.tab.cpp"
    break;

  case 182: /* compound_statement: '{' declaration_list statement_list '}'  */
#line 411 "src/parser.y"
                                                  { (yyval.node) = new ProgramPair((yyvsp[-2].node), (yyvsp[-1].node)); }
#line 2012 "src/parser.tab.cpp"
    break;

  case 183: /* declaration_list: declaration  */
#line 415 "src/parser.y"
                        {(yyval.node) = (yyvsp[0].node); }
#line 2018 "src/parser.tab.cpp"
    break;

  case 184: /* declaration_list: declaration_list declaration  */
#line 416 "src/parser.y"
                                       { (yyval.node) = new DeclarationPair((yyvsp[0].node), (yyvsp[-1].node)); }
#line 2024 "src/parser.tab.cpp"
    break;

  case 185: /* statement_list: statement  */
#line 420 "src/parser.y"
                    { (yyval.node) = (yyvsp[0].node); }
#line 2030 "src/parser.tab.cpp"
    break;

  case 186: /* statement_list: statement_list statement  */
#line 421 "src/parser.y"
                                   { (yyval.node) = new ProgramPair((yyvsp[-1].node), (yyvsp[0].node)); }
#line 2036 "src/parser.tab.cpp"
    break;

  case 188: /* expression_statement: expression ';'  */
#line 426 "src/parser.y"
                         { (yyval.node) = (yyvsp[-1].node); }
#line 2042 "src/parser.tab.cpp"
    break;

  case 189: /* selection_statement: IF '(' expression ')' statement  */
#line 430 "src/parser.y"
                                                                                { (yyval.node) = new IfStmt((yyvsp[-2].node), (yyvsp[0].node)); }
#line 2048 "src/parser.tab.cpp"
    break;

  case 190: /* selection_statement: IF '(' expression ')' statement ELSE statement  */
#line 431 "src/parser.y"
                                                                { (yyval.node) = new IfElse((yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2054 "src/parser.tab.cpp"
    break;

  case 192: /* iteration_statement: WHILE '(' expression ')' statement  */
#line 436 "src/parser.y"
                                                                                                                                { (yyval.node) = new WhileLoop((yyvsp[-2].node), (yyvsp[0].node)); }
#line 2060 "src/parser.tab.cpp"
    break;

  case 195: /* iteration_statement: FOR '(' expression_statement expression_statement expression ')' statement  */
#line 439 "src/parser.y"
                                                                                        { (yyval.node) = new ForLong((yyvsp[-4].node), (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2066 "src/parser.tab.cpp"
    break;

  case 199: /* jump_statement: RETURN ';'  */
#line 446 "src/parser.y"
                     { (yyval.node) = new ReturnStatement(new Number(0)); }
#line 2072 "src/parser.tab.cpp"
    break;

  case 200: /* jump_statement: RETURN expression ';'  */
#line 447 "src/parser.y"
                                { (yyval.node) = new ReturnStatement((yyvsp[-1].node)); }
#line 2078 "src/parser.tab.cpp"
    break;

  case 201: /* translation_unit: external_declaration  */
#line 451 "src/parser.y"
                               { (yyval.node) = (yyvsp[0].node); }
#line 2084 "src/parser.tab.cpp"
    break;

  case 202: /* translation_unit: translation_unit external_declaration  */
#line 452 "src/parser.y"
                                                { (yyval.node) = new ProgramPair((yyvsp[-1].node), (yyvsp[0].node)); }
#line 2090 "src/parser.tab.cpp"
    break;

  case 203: /* external_declaration: function_definition  */
#line 456 "src/parser.y"
                              { (yyval.node) = (yyvsp[0].node); }
#line 2096 "src/parser.tab.cpp"
    break;

  case 204: /* external_declaration: declaration  */
#line 457 "src/parser.y"
                      { (yyval.node) = (yyvsp[0].node); }
#line 2102 "src/parser.tab.cpp"
    break;

  case 206: /* function_definition: declaration_specifiers declarator compound_statement  */
#line 462 "src/parser.y"
                                                                                                        { (yyval.node) = new FunctionDefinition((yyvsp[-1].node), (yyvsp[0].node)); }
#line 2108 "src/parser.tab.cpp"
    break;

  case 209: /* program: translation_unit  */
#line 469 "src/parser.y"
                     { g_root = const_cast<Node*>((yyvsp[0].node)); }
#line 2114 "src/parser.tab.cpp"
    break;


#line 2118 "src/parser.tab.cpp"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 471 "src/parser.y"


Node* g_root;

const Node *parseAST()
{
  g_root=0;
  yyparse();
  return g_root;
}
