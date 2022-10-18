--- third_party/pdfium/xfa/fxfa/parser/cxfa_appearancefilter.cpp.orig	2022-10-05 10:31:11.582478000 +0100
+++ third_party/pdfium/xfa/fxfa/parser/cxfa_appearancefilter.cpp	2022-10-05 10:31:56.588747000 +0100
@@ -15,7 +15,7 @@
     {XFA_Attribute::Id, XFA_AttributeType::CData, nullptr},
     {XFA_Attribute::Use, XFA_AttributeType::CData, nullptr},
     {XFA_Attribute::Type, XFA_AttributeType::Enum,
-     (void*)XFA_AttributeValue::Optional},
+     (void*)(unsigned)XFA_AttributeValue::Optional},
     {XFA_Attribute::Usehref, XFA_AttributeType::CData, nullptr},
 };
 
