from bs4 import BeautifulSoup

html_content = '''<div class="card-text">
    <h3>แบบฝึกหัด</h3>
    
    <ul>
    <li>ข้อ ds04_playlist <a href="https://grader.nattee.net/skeleton/reorder.cpp">http://grader.nattee.net/skeleton/reorder.cpp</a></li>
    <li>ข้อ ds04_hash_tov <a href="https://grader.nattee.net/skeleton/hash_tov.cpp">http://grader.nattee.net/skeleton/hash_tov.cpp</a></li>
    <li>ข้อ ds04_best_bst <a href="https://grader.nattee.net/skeleton/best_bst.cpp">http://grader.nattee.net/skeleton/best_bst.cpp</a></li>
    <li>ข้อ ds03_heap_erase โหลดได้จาก <a href="https://grader.nattee.net/skeleton/heap_erase.cpp">http://grader.nattee.net/skeleton/heap_erase.cpp</a></li>
    <li>ข้อ ds03_heap_order โหลดได้จาก <a href="https://grader.nattee.net/skeleton/heap_order.cpp">http://grader.nattee.net/skeleton/heap_order.cpp</a></li>
    <li>ข้อ ds02_is_reverse ให้โหลดไฟล์เริ่มต้นจาก <a href="https://github.com/nattee/data-class/blob/master/exercise/ds02_is_reverse/main.cpp">https://github.com/nattee/data-class/blob/master/exercise/ds02_is_reverse/main.cpp</a> ครับ</li>
    </ul>
    
    
    <h3>Quiz เก่า</h3>
    
    <h4>ปี 2565</h4>
    
    <ul>
    <li>Quiz 2
    
    <ul>
    <li><a href="/package/2565/package-stack-mitosis.zip">Stack Mitosis</a></li>
    <li><a href="/package/2565/package-vector-no-move.zip">Vector No Move</a></li>
    </ul>
    </li>
    <li>Quiz 3
    
    <ul>
    <li><a href="/package/2565/package_queue_min.zip">Queue Min Element</a></li>
    <li><a href="/package/2565/package_some_move.zip">Vector Some Move</a></li>
    <li><a href="/package/2565/package_split_stack.zip">Split Stack</a></li>
    </ul>
    </li>
    <li>Quiz 4
    
    <ul>
    <li><a href="/package/2565/package_bst_at_level.zip">BST at level</a></li>
    <li><a href="/package/2565/package_list_check.zip">list check</a></li>
    <li><a href="/package/2565/package_queue_total_reverse.zip">Queue Total Reverse</a></li>
    <li><a href="/package/2565/package_heap_check.zip">Heap Check</a></li>
    </ul>
    </li>
    </ul>
    
    
    <h4>ปี 2564</h4>
    
    <ul>
    <li><p>Quiz 2</p>
    
    <ul>
    <li><a href="/package/2564a/package_stack_from_set.zip">d64_q2a_stack_from_set</a></li>
    <li><a href="/package/2564a/package_vector_block_swap.zip">d64_q2a_vector_block_swap</a></li>
    <li><a href="/package/2564a/package_stack_distribute.zip">d64_q2b_stack_distribute</a></li>
    <li><a href="/package/2564a/package_vector_rotate.zip">d64_q2b_vector_rotate</a></li>
    <li><a href="/package/2564a/package_move_insert.zip">Move Insert Stack</a></li>
    <li><a href="/package/2564a/package_vector_less.zip">Vector Less</a></li>
    </ul>
    </li>
    <li><p>Quiz 3</p>
    
    <ul>
    <li><a href="/package/2564a/package_heap_kth.zip">d64_q3a_heap_kth</a></li>
    <li><a href="/package/2564a/package_queue_reverse.zip">Queue Reverse</a></li>
    <li><a href="/package/2564a/package_heap_level.zip">Heap Level</a></li>
    </ul>
    </li>
    <li><p>Quiz 4</p>
    
    <ul>
    <li><a href="/package/2564a/package_subtree.zip">Subtree Extract</a></li>
    <li><a href="/package/2564a/package_list_merge.zip">List Merge</a></li>
    </ul>
    </li>
    </ul>
    
    
    <h4>ปี 2563</h4>
    
    <ul>
    <li>Quiz 2
    
    <ul>
    <li><a href="/package/2563a/package_pair_gte.zip">d63_q2a_pair_gte</a></li>
    <li><a href="/package/2563a/package_vector_mirror.zip">d63_q2a_vector_mirror</a></li>
    <li><a href="/package/2563a/package_stack_reserve.zip">d63_q2b_stack_reserve</a></li>
    <li><a href="/package/2563a/package_vector_compress.zip">d63_q2b_vector_compress</a></li>
    </ul>
    </li>
    <li>Quiz 3
    
    <ul>
    <li><a href="/package/2563a/package_queue_m2b.zip">d63_q3a_queue_m2b</a></li>
    <li><a href="/package/2563a/package_rank_in_heap.zip">d63_q3a_rank_in_heap</a></li>
    <li><a href="/package/2563a/package_queue_b2f.zip">d63_q3b_queue_b2f</a></li>
    <li><a href="/package/2563a/package_heap_change.zip">d63_q3b_heap_change</a></li>
    </ul>
    </li>
    <li>Quiz 4
    
    <ul>
    <li>ข้อ list_reverse <a href="/package/2563a/package_list_reverse.zip">Download</a></li>
    <li>ข้อ leaves_count <a href="/package/2563a/package_leaves_count.zip">Download</a></li>
    <li>ข้อ list extract <a href="/package/2563a/package_list_extract.zip">d63_q4b_list_extract</a></li>
    <li>ข้อ shallowest leaf <a href="/package/2563a/package_shallowest.zip">d63_q4b_shallowest</a></li>
    </ul>
    </li>
    </ul>
    
    
    <h4>ปี 2562</h4>
    
    <ul>
    <li><p>Quiz 4</p>
    
    <ul>
    <li><a href="/package/2562a/package_vector_swap.zip">d62_q2c_vector_swap</a></li>
    <li><a href="/package/2562a/package_queue_m2f.zip">d62_q3b_queue_m2f</a></li>
    <li><a href="/package/2562a/package_list_shift.zip">d62_q4a_list_shift</a></li>
    <li><a href="/package/2562a/package_hash_max_bucket.zip">d62_q4a_hash_max_bucket</a></li>
    </ul>
    </li>
    <li><p>Quiz 3</p>
    
    <ul>
    <li><a href="/package/2562a/package_deep_push.zip">d62_q2b_stack_deep_push</a></li>
    <li><a href="/package/2562a/package_insert_many.zip">d62_q2b_vector_insert_many</a></li>
    </ul>
    </li>
    <li>Quiz 2
    
    <ul>
    <li><a href="/package/2562a/iterator_check.zip">d62_q2a_iterator_check</a></li>
    <li><a href="/package/2562a/multi_count.zip">d62_q2a_multi_count</a></li>
    </ul>
    </li>
    </ul>
    
    
    <h4>ปี 2561</h4>
    
    <ul>
    <li>Quiz 2
    
    <ul>
    <li><a href="/package/2561a/imbalance_package.zip">d61_q1_imbalance</a></li>
    <li><a href="/package/2561a/splitlist_package.zip">d61_q1_split_list</a></li>
    </ul>
    </li>
    <li>Quiz 1
    
    <ul>
    <li><a href="/package/2561a/append_package.zip">d61_q1_append</a></li>
    <li><a href="/package/2561a/ordered_set_package.zip">d61_q1_ordered_set</a></li>
    </ul>
    </li>
    </ul>
    
    
    <h4>ปี 2560</h4>
    
    <ul>
    <li>Quiz 3
    
    <ul>
    <li>ข้อ List Remove All <a href="/package/2560a/remove_all_package.zip">d60_q3_lremove_all</a></li>
    <li>ข้อ Same Tree <a href="/package/2560a/same_tree_package.zip">d60_q3_same_tree</a></li>
    </ul>
    </li>
    <li>Quiz 2
    
    <ul>
    <li>ข้อ Heap Height <a href="https://grader.nattee.net/package/2560a/heap_height_package.zip">http://grader.nattee.net/package/2560a/heap_height_package.zip</a></li>
    <li>ข้อ Split Queue <a href="https://grader.nattee.net/package/2560a/split_queue_package.zip">http://grader.nattee.net/package/2560a/split_queue_package.zip</a></li>
    </ul>
    </li>
    <li>Quiz 1
    
    <ul>
    <li>ข้อ Queue At <a href="https://grader.nattee.net/package/2560a/qat_package.zip">http://grader.nattee.net/package/2560a/qat_package.zip</a></li>
    <li>ข้อ Vector Uniq <a href="https://grader.nattee.net/package/2560a/v_uniq_package.zip">http://grader.nattee.net/package/2560a/v_uniq_package.zip</a></li>
    </ul>
    </li>
    </ul>
    
    
    <h4>ปี 2559</h4>
    
    <ul>
    <li>Quiz 3
    
    <ul>
    <li>ข้อ BST Split <a href="https://grader.nattee.net/package/2559b/bsplit_package.zip">http://grader.nattee.net/package/2559b/bsplit_package.zip</a></li>
    <li>ข้อ List Split <a href="https://grader.nattee.net/package/2559b/lsplit_package.zip">http://grader.nattee.net/package/2559b/lsplit_package.zip</a></li>
    </ul>
    </li>
    <li>Quiz 2
    
    <ul>
    <li>ข้อ Heap Find <a href="https://grader.nattee.net/package/2559b/heapfind_package.zip">http://grader.nattee.net/package/2559b/heapfind_package.zip</a></li>
    <li>ข้อ Queue Equality <a href="https://grader.nattee.net/package/2559b/qequal_package.zip">http://grader.nattee.net/package/2559b/qequal_package.zip</a></li>
    </ul>
    </li>
    <li>Quiz 1
    
    <ul>
    <li>ข้อ Pop Many <a href="https://grader.nattee.net/package/2559b/pop_many_package.zip">http://grader.nattee.net/package/2559b/pop_many_package.zip</a></li>
    <li>ข้อ Range Insert <a href="https://grader.nattee.net/package/2559b/range_insert_package.zip">http://grader.nattee.net/package/2559b/range_insert_package.zip</a></li>
    </ul>
    </li>
    </ul>
    
    
    <h4>ปี 2558</h4>
    
    <ul>
    <li>Quiz 3
    
    <ul>
    <li>ข้อ unary node <a href="https://grader.nattee.net/package/2558b/unary_node.zip">http://grader.nattee.net/package/2558b/unary_node.zip</a></li>
    <li>ข้อ list replate <a href="https://grader.nattee.net/package/2558b/lreplace.zip">http://grader.nattee.net/package/2558b/lreplace.zip</a></li>
    </ul>
    </li>
    <li>Quiz 2
    
    <ul>
    <li>ข้อ Custom <a href="https://grader.nattee.net/package/2558b/custom_package.zip">http://grader.nattee.net/package/2558b/custom_package.zip</a></li>
    <li>ข้อ Heap Equality <a href="https://grader.nattee.net/package/2558b/hequal_project.zip">http://grader.nattee.net/package/2558b/hequal_project.zip</a></li>
    </ul>
    </li>
    <li>Quiz 1
    
    <ul>
    <li>ข้อ to_vector ให้โหลดไฟล์เริ่มต้นจาก <a href="https://grader.nattee.net/package/2558b/d58_q1_tovector.zip">http://grader.nattee.net/package/2558b/d58_q1_tovector.zip</a></li>
    <li>ข้อ erase_many ให้โหลดไฟล์เริ่มต้นจาก <a href="https://grader.nattee.net/package/2558b/d58_q1_erase_many.zip">http://grader.nattee.net/package/2558b/d58_q1_erase_many.zip</a></li>
    </ul>
    </li>
    </ul>
    
    
    <h4>ปี 2557</h4>
    
    <ul>
    <li><p>Quiz 3</p>
    
    <ul>
    <li>ข้อ d57_q3_shift ให้โหลดไฟล์เริ่มต้นจาก <a href="https://grader.nattee.net/package/2557b/shift_pack.zip">http://grader.nattee.net/package/2557b/shift_pack.zip</a></li>
    <li>ข้อ d57_q3_zuma ไม่มีไฟล์เริ่มต้น</li>
    </ul>
    </li>
    <li><p>Quiz 2</p>
    
    <ul>
    <li>ข้อ d57_q2_kheap ให้โหลดไฟล์เริ่มต้นจาก <a href="https://grader.nattee.net/package/2557b/kheap-student.zip">http://grader.nattee.net/package/2557b/kheap-student.zip</a></li>
    <li>ข้อ d57_q2_heap_ordering ให้โหลดไฟล์เริ่มต้นจาก <a href="https://grader.nattee.net/package/2557b/heap_order2.cpp">http://grader.nattee.net/package/2557b/heap_order2.cpp</a></li>
    </ul>
    </li>
    <li><p>Quiz1</p>
    
    <ul>
    <li>ข้อ d57_q1_dense ให้โหลดไฟล์เริ่มต้นจาก <a href="https://grader.nattee.net/package/2557b/dq1_dense/dense_project.zip">http://grader.nattee.net/package/2557b/dq1_dense/dense_project.zip</a></li>
    <li>ข้อ d57_q1_sparse ให้โหลดไฟล์เริ่มต้นจาก <a href="https://grader.nattee.net/package/2557b/dq1_sparse/sparse_project.zip">http://grader.nattee.net/package/2557b/dq1_sparse/sparse_project.zip</a></li>
    <li>ข้อ d57_q1_vequal ให้โหลดไฟล์เริ่มต้นจาก <a href="https://grader.nattee.net/package/2557b/dq1_vequal/vequal_project.zip">http://grader.nattee.net/package/2557b/dq1_vequal/vequal_project.zip</a></li>
    <li>ข้อ d57_q1_sbv ให้โหลดไฟล์เริ่มต้นจาก <a href="https://grader.nattee.net/package/2557b/dq1_sbv/sbv_project.zip">http://grader.nattee.net/package/2557b/dq1_sbv/sbv_project.zip</a></li>
    <li>ข้อ d57_q1_sbv2 ให้โหลดไฟล์เริ่มต้นจาก <a href="https://grader.nattee.net/package/2557b/dq1_sbv2/sbv2_project.zip">http://grader.nattee.net/package/2557b/dq1_sbv2/sbv2_project.zip</a></li>
    <li>ข้อ d57_q1_postfix ให้โหลดไฟล์เริ่มต้นจาก <a href="https://grader.nattee.net/package/2557b/dq1_postfix/postfix_project.zip">http://grader.nattee.net/package/2557b/dq1_postfix/postfix_project.zip</a></li>
    </ul>
    </li>
    </ul>
    
    
    </div>'''  # Replace [YOUR HTML HERE] with the provided HTML

soup = BeautifulSoup(html_content, 'html.parser')

# Find the "Quiz 2" sections
quiz2_sections = soup.find_all(string="Quiz 2")

# Extract all links under these sections
all_links = []
for section in quiz2_sections:
    all_links.extend([link.get('href') for link in section.find_next('ul').find_all('a')])

import requests
import os
import zipfile

def download_file(url, download_path):
    response = requests.get(url, stream=True)
    with open(download_path, 'wb') as f:
        for chunk in response.iter_content(chunk_size=8192):
            f.write(chunk)
def unzip_file(file_path, extract_to):
    with zipfile.ZipFile(file_path, 'r') as zip_ref:
        zip_ref.extractall(extract_to)

# Base URL for relative links
base_url = "https://grader.nattee.net"

# Download each file
for link in all_links:
    # If it's a relative URL, prepend the base URL
    if link.startswith("/"):
        link = base_url + link
    
    file_name = os.path.basename(link)
    download_file(link, file_name)
    print(f"Downloaded {file_name}")

    # if file_name.endswith('.zip'):
    #     unzip_file(file_name, '.')
    #     print(f"Unzipped {file_name}")

