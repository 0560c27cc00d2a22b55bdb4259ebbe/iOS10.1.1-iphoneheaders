/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:21 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <libobjc.A.dylib/CNAvatarImageProvider.h>

@protocol CNUIPRLikenessProvider;
@class NSString;

@interface _CNAvatarImageProvider : NSObject <CNAvatarImageProvider> {

	id<CNUIPRLikenessProvider> _likenessProvider;

}

@property (nonatomic,readonly) id<CNUIPRLikenessProvider> likenessProvider;              //@synthesize likenessProvider=_likenessProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)roundImage:(id)arg1 ;
-(id)initWithLikenessProvider:(id)arg1 ;
-(id<CNUIPRLikenessProvider>)likenessProvider;
-(id)imageForSize:(CGSize)arg1 ;
@end

