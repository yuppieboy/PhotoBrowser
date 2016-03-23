//
//  ViewController.h
//  BrowserTest
//
//  Created by WangPeng on 16/3/23.
//  Copyright © 2016年 weiwend. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MWPhotoBrowser.h"
#import <AssetsLibrary/AssetsLibrary.h>

@interface ViewController : UIViewController<MWPhotoBrowserDelegate>
{
    NSMutableArray *_selections;

}
@property (nonatomic, strong) NSMutableArray *photos;
@property (nonatomic, strong) NSMutableArray *thumbs;
@property (nonatomic, strong) NSMutableArray *assets;

@property (nonatomic, strong) ALAssetsLibrary *ALAssetsLibrary;

@end

