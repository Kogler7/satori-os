void trap_entry()
{
    // intr_off(); // 会导致cbk取消注册失败，尚不清楚原因
    asm volatile(
        "        addi.d $sp, $sp, -256\n"
        "        st.d $ra, $sp, 0\n"
        "        st.d $tp, $sp, 8\n"
        "        st.d $sp, $sp, 16\n"
        "        st.d $a0, $sp, 24\n"
        "        st.d $a1, $sp, 32\n"
        "        st.d $a2, $sp, 40\n"
        "        st.d $a3, $sp, 48\n"
        "        st.d $a4, $sp, 56\n"
        "        st.d $a5, $sp, 64\n"
        "        st.d $a6, $sp, 72\n"
        "        st.d $a7, $sp, 80\n"
        "        st.d $t0, $sp, 88\n"
        "        st.d $t1, $sp, 96\n"
        "        st.d $t2, $sp, 104\n"
        "        st.d $t3, $sp, 112\n"
        "        st.d $t4, $sp, 120\n"
        "        st.d $t5, $sp, 128\n"
        "        st.d $t6, $sp, 136\n"
        "        st.d $t7, $sp, 144\n"
        "        st.d $t8, $sp, 152\n"
        "        st.d $r21, $sp,160\n"
        "        st.d $fp, $sp, 168\n"
        "        st.d $s0, $sp, 176\n"
        "        st.d $s1, $sp, 184\n"
        "        st.d $s2, $sp, 192\n"
        "        st.d $s3, $sp, 200\n"
        "        st.d $s4, $sp, 208\n"
        "        st.d $s5, $sp, 216\n"
        "        st.d $s6, $sp, 224\n"
        "        st.d $s7, $sp, 232\n"
        "        st.d $s8, $sp, 240\n"
        "        bl trap_handler\n"
        "        ld.d $ra, $sp, 0\n"
        "        ld.d $tp, $sp, 8\n"
        "        ld.d $sp, $sp, 16\n"
        "        ld.d $a0, $sp, 24\n"
        "        ld.d $a1, $sp, 32\n"
        "        ld.d $a2, $sp, 40\n"
        "        ld.d $a3, $sp, 48\n"
        "        ld.d $a4, $sp, 56\n"
        "        ld.d $a5, $sp, 64\n"
        "        ld.d $a6, $sp, 72\n"
        "        ld.d $a7, $sp, 80\n"
        "        ld.d $t0, $sp, 88\n"
        "        ld.d $t1, $sp, 96\n"
        "        ld.d $t2, $sp, 104\n"
        "        ld.d $t3, $sp, 112\n"
        "        ld.d $t4, $sp, 120\n"
        "        ld.d $t5, $sp, 128\n"
        "        ld.d $t6, $sp, 136\n"
        "        ld.d $t7, $sp, 144\n"
        "        ld.d $t8, $sp, 152\n"
        "        ld.d $r21, $sp,160\n"
        "        ld.d $fp, $sp, 168\n"
        "        ld.d $s0, $sp, 176\n"
        "        ld.d $s1, $sp, 184\n"
        "        ld.d $s2, $sp, 192\n"
        "        ld.d $s3, $sp, 200\n"
        "        ld.d $s4, $sp, 208\n"
        "        ld.d $s5, $sp, 216\n"
        "        ld.d $s6, $sp, 224\n"
        "        ld.d $s7, $sp, 232\n"
        "        ld.d $s8, $sp, 240\n"
        "        addi.d $sp, $sp, 256\n"
        "        ertn\n"
        :
        :
        :);
    // intr_on();
}