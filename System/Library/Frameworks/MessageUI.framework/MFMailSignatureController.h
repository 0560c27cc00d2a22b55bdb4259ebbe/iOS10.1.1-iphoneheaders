/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MFMailSignatureController : NSObject
-(void)addSignatureForSender:(id)arg1 bodyField:(id)arg2 prepend:(BOOL)arg3 ;
-(void)updateSignatureForSender:(id)arg1 bodyField:(id)arg2 ;
-(void)finalizeSignatureForBodyField:(id)arg1 ;
-(BOOL)isDefaultSignatureForSender:(id)arg1 ;
-(void)removeSignatureForSender:(id)arg1 bodyField:(id)arg2 ;
-(id)_signatureStringForSender:(id)arg1 ;
-(id)_locateSignatureDiv:(id)arg1 ;
-(id)_domDocumentForComposeBodyField:(id)arg1 ;
-(id)_createSignatureForSender:(id)arg1 document:(id)arg2 prepend:(BOOL)arg3 node:(id)arg4 usingMarkup:(BOOL)arg5 ;
-(id)_signatureMarkupStringForSender:(id)arg1 ;
-(id)_createSignatureElement:(id)arg1 prepend:(BOOL)arg2 node:(id)arg3 signature:(id)arg4 ;
-(BOOL)_isDraftRestore:(id)arg1 ;
-(BOOL)_updateToSignature:(id)arg1 forDocument:(id)arg2 ;
-(id)_prependSignatureForSender:(id)arg1 document:(id)arg2 node:(id)arg3 includeMarkup:(BOOL)arg4 ;
@end

