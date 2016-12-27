/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:06 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/JavaScriptCore.framework/JavaScriptCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <JavaScriptCore/JavaScriptCore-Structs.h>
@class NSMapTable;

@interface JSVirtualMachine : NSObject {

	OpaqueJSContextGroupRef m_group;
	NSMapTable* m_contextCache;
	NSMapTable* m_externalObjectGraph;
	NSMapTable* m_externalRememberedSet;

}
+(id)virtualMachineWithContextGroupRef:(OpaqueJSContextGroupRef)arg1 ;
-(void)addContext:(id)arg1 forGlobalContextRef:(OpaqueJSContextRef)arg2 ;
-(id)contextForGlobalContextRef:(OpaqueJSContextRef)arg1 ;
-(id)initWithContextGroupRef:(OpaqueJSContextGroupRef)arg1 ;
-(BOOL)isOldExternalObject:(id)arg1 ;
-(void)addExternalRememberedObject:(id)arg1 ;
-(id)externalObjectGraph;
-(id)externalRememberedSet;
-(id)init;
-(void)dealloc;
-(void)addManagedReference:(id)arg1 withOwner:(id)arg2 ;
-(void)removeManagedReference:(id)arg1 withOwner:(id)arg2 ;
@end

