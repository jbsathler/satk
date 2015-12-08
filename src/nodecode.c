/* Copyright (C) 2010, University of Halle */

/*  This file is part of Sather-K Compiler Halle.
      
    Sather-K Compiler Halle is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.
                      
    Sather-K Compiler Halle is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
                                      
    You should have received a copy of the GNU General Public
    License along with Sather-K Compiler Halle.  If not, see
    <http://www.gnu.org/licenses/>. */
    

/* mapping of productions to lefthand side symbols */

#include "nodecode.h"

int LHSMAP[] = {
SYMBClass_declarations_2, SYMBClass_declaration_2, SYMBLST_Class_declarations_2, SYMBLST_Class_declarations_2, 
SYMBClass_head_2, SYMBMethod_decl_2, SYMBClass_body_2, SYMBFeature_2, SYMBFeature_2, 
SYMBFeature_2, SYMBFeature_2, SYMBAttribute_declaration_2, SYMBAttribute_declaration_2, SYMBAttribute_declaration_2, 
SYMBAttribute_declaration_2, SYMBAttribute_declaration_2, SYMBAttribute_specification_2, SYMBClass_declarations, SYMBClass_declaration, 
SYMBFeature_declarations_2, SYMBFeature_declaration_2, SYMBFeature_declaration_2, SYMBMethod_body_2, SYMBMethod_body_2, 
SYMBMethod_body_2, SYMBMethod_body_2, SYMBMethod_body_2, SYMBBlock_2, SYMBclass_declarations, 
SYMBclass_declaration, SYMBLST_class_declarations, SYMBLST_class_declarations, SYMBLST_Feature_declarations_2, SYMBLST_Feature_declarations_2, 
SYMBLST_Class_declarations, SYMBLST_Class_declarations, SYMBClass_head, SYMBClass_bounds_2, SYMBClass_bounds_2, 
SYMBIdent_def_2, SYMBDesignator_2, SYMBDesignator_2, SYMBDesignator_2, SYMBDesignator_2, 
SYMBExpression_2, SYMBExpression_2, SYMBExpression_2, SYMBExpression_2, SYMBExpression_2, 
SYMBExpression_2, SYMBExpression_2, SYMBExpression_2, SYMBExpression_2, SYMBIdentifiers_2, 
SYMBIdentifiers_2, SYMBParameters_2, SYMBParameter_specification_2, SYMBLocal_declarations_2, SYMBLocal_declarations_2, 
SYMBLocal_declarations_2, SYMBLocal_stream_declaration_2, SYMBStatements_2, SYMBStatements_2, SYMBStatements_2, 
SYMBStatements_2, SYMBStatements_2, SYMBStatements_2, SYMBStatements_2, SYMBStatements_2, 
SYMBStatements_2, SYMBStatements_2, SYMBStatements_2, SYMBStatements_2, SYMBStatements_2, 
SYMBBegin_block_2, SYMBExceptions_2, SYMBExceptions_2, SYMBWhen_exception_stmts_2, SYMBWhen_exception_stmts_2, 
SYMBWhen_exception_stmt_2, SYMBWhen_exception_stmt_2, SYMBConditional_statement_2, SYMBConditional_statement_2, SYMBCase_statement_2, 
SYMBWhen_label_stmts_2, SYMBWhen_label_stmts_2, SYMBWhen_label_stmt_2, SYMBType_case_statement_2, SYMBType_case_statement_2, 
SYMBWhen_types_blocks_2, SYMBWhen_types_blocks_2, SYMBWhen_types_block_2, SYMBWhen_types_block_2, SYMBLoop_2, 
SYMBLoop_2, SYMBclass_head, SYMBLST_Parameters_2, SYMBLST_Parameters_2, SYMBClass_body, 
SYMBFeature_declarations, SYMBFeature_declaration, SYMBFeature_declaration, SYMBFeature, SYMBFeature, 
SYMBFeature, SYMBFeature, SYMBMethod_decl, SYMBParameters, SYMBMethod_body, 
SYMBMethod_body, SYMBMethod_body, SYMBMethod_body, SYMBMethod_body, SYMBBuiltin_option_2, 
SYMBBuiltin_option_2, SYMBBuiltin_option_2, SYMBBuiltin_option_2, SYMBBound_identifier_2, SYMBArguments_2, 
SYMBArguments_2, SYMBArgument_2, SYMBArgument_2, SYMBArgument_2, SYMBArgument_2, 
SYMBStd_method_call_2, SYMBQualification_2, SYMBQualification_2, SYMBType_constructor_2, SYMBType_constructor_2, 
SYMBType_constructor_2, SYMBType_constructor_2, SYMBType_constructor_2, SYMBType_constructor_2, SYMBAggregate_2, 
SYMBAggregate_2, SYMBBound_method_2, SYMBDirect_stream_call_2, SYMBclass_body, SYMBclass_parameters, 
SYMBclass_parameters, SYMBclass_parameter, SYMBLST_Feature_declarations, SYMBLST_Feature_declarations, SYMBClass_bounds, 
SYMBClass_bounds, SYMBBound_identifier, SYMBBound_identifier, SYMBIdent_def, SYMBInheritances, 
SYMBInheritances, SYMBAttribute_declaration, SYMBAttribute_declaration, SYMBAttribute_declaration, SYMBAttribute_declaration, 
SYMBAttribute_declaration, SYMBAttribute_specification, SYMBIdentifiers, SYMBIdentifiers, SYMBParameter_specification, 
SYMBBlock, SYMBLocal_declarations, SYMBLocal_declarations, SYMBLocal_declarations, SYMBLocal_stream_declaration, 
SYMBStatements, SYMBStatements, SYMBStatements, SYMBStatements, SYMBStatements, 
SYMBStatements, SYMBStatements, SYMBStatements, SYMBStatements, SYMBStatements, 
SYMBStatements, SYMBStatements, SYMBStatements, SYMBBegin_block, SYMBExceptions, 
SYMBExceptions, SYMBWhen_exception_stmts, SYMBWhen_exception_stmts, SYMBWhen_exception_stmt, SYMBConditional_statement, 
SYMBConditional_statement, SYMBCase_statement, SYMBWhen_label_stmts, SYMBWhen_label_stmts, SYMBWhen_label_stmt, 
SYMBType_case_statement, SYMBType_case_statement, SYMBWhen_types_blocks, SYMBWhen_types_blocks, SYMBWhen_types_block, 
SYMBLoop, SYMBLoop, SYMBClass_parameters_2, SYMBClass_parameters_2, SYMBClass_parameter_2, 
SYMBType_specifiers_2, SYMBType_specifiers_2, SYMBType_specifier_2, SYMBType_specifier_2, SYMBType_specifier_2, 
SYMBType_specifier_2, SYMBType_specifier_2, SYMBType_specifier_2, SYMBType_specifier_2, SYMBClass_specifier_2, 
SYMBClass_arguments_2, SYMBClass_arguments_2, SYMBClass_argument_2, SYMBMethod_specification_2, SYMBParameter_types_2, 
SYMBParameter_type_2, SYMBBounds_2, SYMBBound_2, SYMBNamed_expressions_2, SYMBNamed_expression_2, 
SYMBCoercion_2, SYMBInheritances_2, SYMBInheritances_2, SYMBInheritance_2, SYMBBuiltin_instructions_2, 
SYMBBuiltin_instructions_2, SYMBBuiltin_instruction_2, SYMBBuiltin_instruction_2, SYMBBuiltin_instruction_2, SYMBAssignment_2, 
SYMBLabel_list_2, SYMBLabel_range_2, SYMBLabel_range_2, SYMBCase_label_2, SYMBCase_label_2, 
SYMBRaise_statement_2, SYMBAssertion_statement_2, SYMBclass_id_def, SYMBclass_param_id_def, SYMBbounds, 
SYMBbound, SYMBfeature_declarations, SYMBfeature_declaration, SYMBfeature_declaration, SYMBfeature, 
SYMBfeature, SYMBfeature, SYMBfeature, SYMBmethod_decl, SYMBLST_feature_declarations, 
SYMBLST_feature_declarations, SYMBLST_bounds, SYMBLST_bounds, SYMBLST_Label_list_2, SYMBLST_Label_list_2, 
SYMBLST_Named_expressions_2, SYMBLST_Named_expressions_2, SYMBLST_Bounds_2, SYMBLST_Bounds_2, SYMBLST_Parameter_types_2, 
SYMBLST_Parameter_types_2, SYMBLST_Parameters, SYMBLST_Parameters, SYMBClass_id_def, SYMBClass_parameters, 
SYMBClass_parameters, SYMBClass_parameter, SYMBClass_specifier, SYMBClass_arguments, SYMBClass_arguments, 
SYMBClass_argument, SYMBInheritance, SYMBInheritance, SYMBInheritance, SYMBInheritance, 
SYMBClass_id_def_2, SYMBClass_id_def_2, SYMBName_2, SYMBName_2, SYMBName_2, 
SYMBName_2, SYMBName_2, SYMBName_2, SYMBName_2, SYMBName_2, 
SYMBName_2, SYMBName_2, SYMBName_2, SYMBName_2, SYMBName_2, 
SYMBName_2, SYMBName_2, SYMBName_2, SYMBName_2, SYMBName_2, 
SYMBName_2, SYMBName_2, SYMBName_2, SYMBName_2, SYMBName_2, 
SYMBMethod_ident_def_2, SYMBbuiltin_option, SYMBbuiltin_option, SYMBbuiltin_option, SYMBbuiltin_option, 
SYMBtype_specifiers, SYMBtype_specifiers, SYMBtype_specifier, SYMBtype_specifier, SYMBtype_specifier, 
SYMBtype_specifier, SYMBtype_specifier, SYMBtype_specifier, SYMBtype_specifier, SYMBtype_specifier, 
SYMBclass_specifier, SYMBclass_arguments, SYMBclass_arguments, SYMBclass_argument, SYMBmethod_specification, 
SYMBparameter_types, SYMBparameter_type, SYMBclass_id_use, SYMBarguments, SYMBarguments, 
SYMBargument, SYMBargument, SYMBargument, SYMBargument, SYMBdesignator, 
SYMBdesignator, SYMBdesignator, SYMBdesignator, SYMBexpression, SYMBexpression, 
SYMBexpression, SYMBexpression, SYMBexpression, SYMBexpression, SYMBexpression, 
SYMBexpression, SYMBexpression, SYMBexpression, SYMBstd_method_call, SYMBqualification, 
SYMBqualification, SYMBtype_constructor, SYMBtype_constructor, SYMBtype_constructor, SYMBtype_constructor, 
SYMBtype_constructor, SYMBtype_constructor, SYMBaggregate, SYMBaggregate, SYMBnamed_expressions, 
SYMBnamed_expression, SYMBbound_method, SYMBcoercion, SYMBdirect_stream_call, SYMBinheritances, 
SYMBinheritances, SYMBinheritance, SYMBinheritance, SYMBinheritance, SYMBinheritance, 
SYMBmodifications, SYMBmodification, SYMBmodification, SYMBmodification, SYMBfeature_specification, 
SYMBfeature_specification, SYMBattribute_declaration, SYMBattribute_declaration, SYMBattribute_declaration, SYMBattribute_declaration, 
SYMBattribute_declaration, SYMBattribute_specification, SYMBparameters, SYMBparameter_specification, SYMBmethod_body, 
SYMBmethod_body, SYMBmethod_body, SYMBmethod_body, SYMBmethod_body, SYMBbuiltin_instructions, 
SYMBbuiltin_instructions, SYMBbuiltin_instruction, SYMBbuiltin_instruction, SYMBbuiltin_instruction, SYMBblock, 
SYMBlocal_declarations, SYMBlocal_declarations, SYMBlocal_declarations, SYMBlocal_stream_declaration, SYMBstatements, 
SYMBstatements, SYMBstatements, SYMBstatements, SYMBstatements, SYMBstatements, 
SYMBstatements, SYMBstatements, SYMBstatements, SYMBstatements, SYMBstatements, 
SYMBstatements, SYMBstatements, SYMBassignment, SYMBbegin_block, SYMBexceptions, 
SYMBexceptions, SYMBwhen_exception_stmts, SYMBwhen_exception_stmts, SYMBwhen_exception_stmt, SYMBexception_types, 
SYMBexception_types, SYMBconditional_statement, SYMBconditional_statement, SYMBcase_statement, SYMBwhen_label_stmts, 
SYMBwhen_label_stmts, SYMBwhen_label_stmt, SYMBlabel_list, SYMBlabel_range, SYMBlabel_range, 
SYMBcase_label, SYMBcase_label, SYMBtype_case_statement, SYMBtype_case_statement, SYMBwhen_types_blocks, 
SYMBwhen_types_blocks, SYMBwhen_types_block, SYMBtypes, SYMBtypes, SYMBloop, 
SYMBloop, SYMBraise_statement, SYMBassertion_statement, SYMBLST_label_list, SYMBLST_label_list, 
SYMBLST_parameters, SYMBLST_parameters, SYMBLST_modifications, SYMBLST_modifications, SYMBLST_named_expressions, 
SYMBLST_named_expressions, SYMBLST_parameter_types, SYMBLST_parameter_types, SYMBBuiltin_option, SYMBBuiltin_option, 
SYMBBuiltin_option, SYMBBuiltin_option, SYMBType_specifiers, SYMBType_specifiers, SYMBType_specifier, 
SYMBType_specifier, SYMBType_specifier, SYMBType_specifier, SYMBType_specifier, SYMBType_specifier, 
SYMBType_specifier, SYMBMethod_specification, SYMBParameter_types, SYMBParameter_type, SYMBClass_id_use, 
SYMBBounds, SYMBBound, SYMBArguments, SYMBArguments, SYMBArgument, 
SYMBArgument, SYMBArgument, SYMBArgument, SYMBDesignator, SYMBDesignator, 
SYMBDesignator, SYMBDesignator, SYMBExpression, SYMBExpression, SYMBExpression, 
SYMBExpression, SYMBExpression, SYMBExpression, SYMBExpression, SYMBExpression, 
SYMBExpression, SYMBStd_method_call, SYMBQualification, SYMBQualification, SYMBType_constructor, 
SYMBType_constructor, SYMBType_constructor, SYMBType_constructor, SYMBType_constructor, SYMBType_constructor, 
SYMBAggregate, SYMBAggregate, SYMBNamed_expressions, SYMBNamed_expression, SYMBBound_method, 
SYMBCoercion, SYMBDirect_stream_call, SYMBModifications, SYMBModification, SYMBModification, 
SYMBModification, SYMBFeature_specification, SYMBFeature_specification, SYMBBuiltin_instructions, SYMBBuiltin_instructions, 
SYMBBuiltin_instruction, SYMBBuiltin_instruction, SYMBBuiltin_instruction, SYMBAssignment, SYMBException_types, 
SYMBException_types, SYMBLabel_list, SYMBLabel_range, SYMBLabel_range, SYMBCase_label, 
SYMBCase_label, SYMBTypes, SYMBTypes, SYMBRaise_statement, SYMBAssertion_statement, 
SYMBQual_feature_id_use_2, SYMBAgg_id_def_2, SYMBValue_2, SYMBValue_2, SYMBValue_2, 
SYMBValue_2, SYMBValue_2, SYMBValue_2, SYMBValue_2, SYMBValue_2, 
SYMBclass_bounds, SYMBclass_bounds, SYMBLST_Label_list, SYMBLST_Label_list, SYMBLST_Modifications, 
SYMBLST_Modifications, SYMBLST_Named_expressions, SYMBLST_Named_expressions, SYMBLST_Bounds, SYMBLST_Bounds, 
SYMBLST_Parameter_types, SYMBLST_Parameter_types, SYMBClass_attribute, SYMBClass_attribute, SYMBClass_attribute, 
SYMBClass_attribute, SYMBClass_attribute, SYMBParameter_kind, SYMBParameter_kind, SYMBParameter_kind, 
SYMBParameter_kind, SYMBName, SYMBName, SYMBName, SYMBName, 
SYMBName, SYMBName, SYMBName, SYMBName, SYMBName, 
SYMBName, SYMBName, SYMBName, SYMBName, SYMBName, 
SYMBName, SYMBName, SYMBName, SYMBName, SYMBName, 
SYMBName, SYMBName, SYMBName, SYMBName, SYMBObj_id_use, 
SYMBQual_feature_id_use, SYMBAgg_id_def, SYMBValue, SYMBValue, SYMBValue, 
SYMBValue, SYMBValue, SYMBValue, SYMBValue, SYMBValue, 
SYMBStringconstants, SYMBStringconstants, SYMBStringconstant, SYMBIdent_mod, SYMBFeature_id_use, 
SYMBAttribute_access_type, SYMBAttribute_access_type, SYMBAttribute_access_type, SYMBMethod_ident_def, SYMBForeign_language, 
SYMBLinker_symbol, SYMBLinker_symbol, SYMBBreak_statement, SYMBResume_statement, SYMBReturn_statement, 
SYMBClass_attribute_2, SYMBClass_attribute_2, SYMBClass_attribute_2, SYMBClass_attribute_2, SYMBClass_attribute_2, 
SYMBParameter_kind_2, SYMBParameter_kind_2, SYMBParameter_kind_2, SYMBParameter_kind_2, SYMBClass_id_use_2, 
SYMBObj_id_use_2, SYMBStringconstants_2, SYMBStringconstants_2, SYMBStringconstant_2, SYMBAttribute_access_type_2, 
SYMBAttribute_access_type_2, SYMBAttribute_access_type_2, SYMBForeign_language_2, SYMBLinker_symbol_2, SYMBLinker_symbol_2, 
SYMBBreak_statement_2, SYMBResume_statement_2, SYMBReturn_statement_2, SYMBclass_attribute, SYMBclass_attribute, 
SYMBclass_attribute, SYMBclass_attribute, SYMBclass_attribute, SYMBbound_identifier, SYMBbound_identifier, 
SYMBident_def, SYMBparameter_kind, SYMBparameter_kind, SYMBparameter_kind, SYMBparameter_kind, 
SYMBname, SYMBname, SYMBname, SYMBname, SYMBname, 
SYMBname, SYMBname, SYMBname, SYMBname, SYMBname, 
SYMBname, SYMBname, SYMBname, SYMBname, SYMBname, 
SYMBname, SYMBname, SYMBname, SYMBname, SYMBname, 
SYMBname, SYMBname, SYMBname, SYMBname, SYMBobj_id_use, 
SYMBqual_feature_id_use, SYMBagg_id_def, SYMBvalue, SYMBvalue, SYMBvalue, 
SYMBvalue, SYMBvalue, SYMBvalue, SYMBvalue, SYMBvalue, 
SYMBstringconstants, SYMBstringconstants, SYMBstringconstant, SYMBident_mod, SYMBfeature_id_use, 
SYMBattribute_access_type, SYMBattribute_access_type, SYMBattribute_access_type, SYMBidentifiers, SYMBidentifiers, 
SYMBmethod_ident_def, SYMBforeign_language, SYMBlinker_symbol, SYMBlinker_symbol, SYMBbreak_statement, 
SYMBresume_statement, SYMBreturn_statement, SYMBprogram, SYMBname
};
