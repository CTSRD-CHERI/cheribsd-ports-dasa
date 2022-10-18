--- third_party/pdfium/xfa/fxfa/parser/cxfa_bind.cpp.orig	2022-10-05 10:41:09.600697000 +0100
+++ third_party/pdfium/xfa/fxfa/parser/cxfa_bind.cpp	2022-10-05 10:41:40.817160000 +0100
@@ -24,10 +24,10 @@
     {XFA_Attribute::Use, XFA_AttributeType::CData, nullptr},
     {XFA_Attribute::ContentType, XFA_AttributeType::CData, nullptr},
     {XFA_Attribute::TransferEncoding, XFA_AttributeType::Enum,
-     (void*)XFA_AttributeValue::None},
+     (void*)(unsinged)XFA_AttributeValue::None},
     {XFA_Attribute::Usehref, XFA_AttributeType::CData, nullptr},
     {XFA_Attribute::Match, XFA_AttributeType::Enum,
-     (void*)XFA_AttributeValue::Once},
+     (void*)(unsigned)XFA_AttributeValue::Once},
 };
 
 }  // namespace
