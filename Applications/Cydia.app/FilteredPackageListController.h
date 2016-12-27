/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:14 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/Cydia.app/Cydia
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Cydia/Cydia-Structs.h>
#import <Cydia/PackageListController.h>

@interface FilteredPackageListController : PackageListController {

	Function<bool, Package *>* filter_;
	Function<void, NSMutableArray *>* sorter_;

}
-(id)_reloadPackages;
-(void)setSorter:(Function<void, NSMutableArray *>*)arg1 ;
-(id)initWithDatabase:(id)arg1 title:(id)arg2 filter:(Function<bool, Package *>*)arg3 ;
-(void)setFilter:(Function<bool, Package *>*)arg1 ;
@end

