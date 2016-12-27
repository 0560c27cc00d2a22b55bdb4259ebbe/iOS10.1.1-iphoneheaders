/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:11 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SymptomDiagnosticManagement.framework/SymptomDiagnosticManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDateFormatter;

@interface DiagnosticExtensionController : NSObject {

	NSDateFormatter* dateFormatter;

}
+(void)initialize;
+(id)storedPayloadDictionary;
+(BOOL)addPayloadToStoredDictionary:(id)arg1 ;
+(void)updatePayloadStoreDictionaryWithResults:(id)arg1 forIdentifier:(id)arg2 ;
+(void)setDestinationRootDirectory:(id)arg1 ;
+(id)destinationRootDirectory;
+(void)removeCasesFromStoredDictionary:(id)arg1 ;
-(id)init;
-(void)collectDEPayloadsWithIdentifier:(id)arg1 diagnosticExtensionsWithParameters:(id)arg2 queue:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)collectDEPayloadsWithIdentifier:(id)arg1 diagnosticExtensions:(id)arg2 queue:(id)arg3 reply:(/*^block*/id)arg4 ;
@end

